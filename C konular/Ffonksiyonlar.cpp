#include <stdio.h>

int main() {
    // 1. FOPEN: Dosyayý hem yazma hem okuma modunda (w+) açýyoruz
    FILE *dosya = fopen("veritabani.txt", "w+");
    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    // 2. FPRINTF: Dosyaya ilk veriyi yazýyoruz
    fprintf(dosya, "ABCDE");

    // 3. PUTC / FPUTC: Dosyanýn devamýna tek bir karakter ekliyoruz
    fputc('F', dosya); // Dosya þu an: ABCDEF

    // 4. REWIND: Okuma iþlemlerine baþlamak için imleci en baþa (0. bayta) sarýyoruz
    rewind(dosya);

    // 5. GETC / FGETC: Dosyanýn en baþýndan tek bir karakter okuyoruz
    char ilk_harf = fgetc(dosya);
    printf("1. fgetc ile okunan: %c\n", ilk_harf); // Çýktý: A
    
    // 'A' okunduðu için imleç þu an 1. konumda ('B' harfinin önünde)

    // 6. FGETPOS: Tam bu 1. konumu ('B' harfinin önü) hafýzaya kaydediyoruz
    fpos_t kayit_noktasi;
    fgetpos(dosya, &kayit_noktasi);

    // 7. FSEEK (SEEK_END): Dosyanýn en sonuna gidip konumuna bakýyoruz
    fseek(dosya, 0, SEEK_END);
    printf("2. Dosyanin sonunun konumu: %ld\n", ftell(dosya)); // Çýktý: 6

    // 8. FSETPOS: Az önce fgetpos ile kaydettiðimiz 1. konuma geri getiriyoruz
    fsetpos(dosya, &kayit_noktasi);
    printf("3. fsetpos sonrasi su anki konum: %ld\n", ftell(dosya)); // Çýktý: 1

    // 9. FGETS (Dosyalar için güvenli gets): Ýmlecin olduðu yerden itibaren satýrý okur
    char kalan_metin[10];
    fgets(kalan_metin, 10, dosya); // 1. konumdan (B'den) itibaren sona kadar okur
    printf("4. fgets ile okunan kalan metin: %s\n", kalan_metin); // Çýktý: BCDEF

    // 10. FCLOSE: Dosyayý kapatýyoruz
    fclose(dosya);
    return 0;
}
