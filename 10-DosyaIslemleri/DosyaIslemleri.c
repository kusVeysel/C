#include <stdio.h>

int main() {
    FILE *dosya;

    /*
        ==================== DOSYA AÇMA ====================

        FILE *: Dosyayý temsil eden pointer.

        fopen(): Dosyayý açar.

        "w+":
            Hem okuma hem yazma yapmamýzý saðlar.
            Dosya yoksa oluþturur.
            Dosya varsa eski içeriði siler.
    */
    dosya = fopen("veritabani.txt", "w+");

    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    /*
        ==================== FPRINTF ====================

        fprintf(): printf() gibi çalýþýr fakat ekrana deðil dosyaya veri yazar.
    */
    
    // Dosyaya: ABCDE yazýlýr.
    fprintf(dosya, "ABCDE");


    /*
        ==================== FPUTC ====================

        fputc(): Dosyaya TEK BÝR KARAKTER yazar.

        Dosyanýn içeriði ABCDEF
    */
    fputc('F', dosya);

    /*
        ==================== FPUTS ====================

        fputs(): Dosyaya bir STRING yazar.

        Burada dosyanýn sonuna: "GHI" eklenir.

        Dosya: ABCDEFGHI
    */
    fputs("GHI", dosya);

    /*
        ==================== FSEEK ====================

        fseek(): Dosya imlecini istediðimiz konuma taþýr.

        SEEK_SET -> Dosyanýn baþýndan itibaren
        SEEK_CUR -> Þu anki konumdan itibaren
        SEEK_END -> Dosyanýn sonundan itibaren

        Burada dosyanýn baþýna gidiyoruz.
    */
    fseek(dosya, 0, SEEK_SET);

    /*
        ==================== FTELL ====================

        ftell(): Dosya imlecinin mevcut konumunu döndürür.

        Þu an baþta olduðumuz için: 0
    */
    printf("1. Baslangic konumu: %ld\n", ftell(dosya));

    /*
        ==================== FGETC ====================

        fgetc(): Dosyadan TEK BÝR KARAKTER okur.

        A okunur ve imleç: 0 -> 1 konumuna ilerler.
    */
    char karakter = fgetc(dosya);
    printf("2. fgetc ile okunan: %c\n", karakter);
    printf("3. fgetc sonrasi konum: %ld\n", ftell(dosya));

    /*
        ==================== FGETPOS ====================

        fgetpos(): Dosyanýn mevcut konumunu fpos_t deðiþkenine kaydeder.

        Böylece daha sonra fsetpos() ile ayný konuma dönebiliriz.
    */
    fpos_t kayit_noktasi;
    fgetpos(dosya, &kayit_noktasi);

    /*
        ==================== FSEEK + FTELL ====================

        Dosyanýn sonuna gidiyoruz.

        SEEK_END Dosyanýn sonunu baþlangýç noktasý kabul eder.

        0: Son konumdan 0 byte uzaklýk.

        Böylece dosyanýn sonuna gideriz.
    */
    fseek(dosya, 0, SEEK_END);
    printf("4. Dosyanin son konumu: %ld\n", ftell(dosya));

    /*
        ==================== FSETPOS ====================

        Daha önce fgetpos() ile kaydettiðimiz konuma tekrar dönüyoruz.
    */
    fsetpos(dosya, &kayit_noktasi);
    printf("5. fsetpos sonrasi konum: %ld\n", ftell(dosya));

    /*
        ==================== FGETS ====================

        fgets(): Dosyadan STRING / satýr okur.

        10: En fazla 9 karakter + '\0' okuyabilir.

        Okuma mevcut imleçten baþlar.
    */
    char metin[10];

    if (fgets(metin, sizeof(metin), dosya) != NULL)
        printf("6. fgets ile okunan: %s\n", metin);

    /*
        ==================== REWIND ====================

        rewind(): Dosya imlecini doðrudan dosyanýn baþýna götürür.

        fseek(dosya, 0, SEEK_SET);
        ile ayný konuma götürür ancak rewind() ayrýca
        dosyanýn EOF durumunu temizler.
    */
    rewind(dosya);

    /*
        ==================== FSCANF ====================

        fscanf(): Dosyadan biçimli veri okur.

        Örneðin dosyada:
            25 Veysel

        varsa:

            int yas;
            char isim[20];

            fscanf(dosya, "%d %s", &yas, isim);

        þeklinde okunabilir.

        Bu örnekte dosyamýz string aðýrlýklý olduðu için ayrýca kullanýlmasýna gerek yoktur.
    */

    /*
        ==================== DOSYA KONUM FONKSÝYONLARI ====================

        ftell() -> Mevcut imleç konumunu öðrenir.

        fseek() -> Ýmleci istediðimiz konuma taþýr.

        fgetpos() -> Mevcut konumu kaydeder.

        fsetpos() -> Kaydedilmiþ konuma geri döner.

        rewind() -> Ýmleci dosyanýn baþýna götürür.
    */

    /*
        ==================== DOSYA OKUMA/YAZMA FONKSÝYONLARI ====================

        fprintf() -> Biçimli veri yazar.

        fscanf() > Biçimli veri okur.

        fputc() -> Tek karakter yazar.

        fgetc() -> Tek karakter okur.

        fputs() -> String yazar.

        fgets() -> String/satýr okur.

        fwrite() -> Ham/binary veri yazar.

        fread() -> Ham/binary veri okur.
    */

    /*
        ==================== DOSYAYI KAPATMA ====================

        fclose(): Dosyayla iþimiz bittikten sonra dosyayý kapatýr.

        Açýlan dosyalarý kapatmak önemlidir.
    */
    fclose(dosya);
}
