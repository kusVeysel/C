#include <stdio.h> // girdi (input) ve çýktý (output) iþlemlerini yapmamýzý saðlayan standart kütüphaneyi programa dahil ederiz
#include <stdbool.h> // bool, true ve false kullanabilmek için gerekli olan kütüphaneyi dahil ederiz

int main()
{
    /*
    ============================================================
                    1. DEÐÝÞKENLER VE VERÝ TÝPLERÝ
    ============================================================

    Deðiþkenler, program içerisinde veri saklamak için kullanýlýr.

    Temel veri tipleri:
    int    -> Tam sayýlar
    float  -> Ondalýklý sayýlar
    double -> Daha hassas ondalýklý sayýlar
    char   -> Tek karakter
    bool   -> true / false deðerleri

    Deðiþken tanýmlama yapýsý: veri_tipi deðiþken_adý = deðer;
    */

    int ogrenciNo = 101;            // int    -> Tam sayý
    float ortalama = 85.75f;        // float  -> Ondalýklý sayý
    double hassasHesap = 12.3456789; // double -> Daha hassas ondalýklý sayý
    char harfNotu = 'A';             // char   -> Tek karakter
    bool ogrenciMi = true;           // bool   -> true veya false


    /*
    ============================================================
                    2. EKRANA YAZDIRMA - printf()
    ============================================================

    printf() ekrana bilgi yazdýrmak için kullanýlýr.

    Bazý temel format belirleyiciler:

    %d  -> int
    %f  -> float
    %c  -> char
    %s  -> String (karakter dizisi) , stringler kýsmýnda göreceksiniz.
    %lf -> double

    \n -> Yeni(alt) satýra geçer.

    %.xf -> Ondalýk kýsmý x basamak gösterir. Ondalýktan sonra kaç basamak göstermesini istiyorsanýz x yerine onu yazýn. örneðin %.3f -> virgülden sonra 3 basamak getirir
    */

    printf("=== OGRENCI BILGI SISTEMI ===\n");

    printf("No: %d\n", ogrenciNo);
    printf("Ortalama: %.2f\n", ortalama);
    printf("Harf Notu: %c\n", harfNotu);
    printf("Hassas Deger: %.7lf\n", hassasHesap);

    // bool deðeri printf ile %d kullanýlarak yazdýrýlabilir.
    // true -> 1
    // false -> 0
    printf("Ogrenci Mi: %d\n", ogrenciMi);


    /*
    ============================================================
                    3. KULLANICIDAN VERÝ ALMA - scanf()
    ============================================================

    scanf() kullanýcýdan veri almak için kullanýlýr.

    Örneðin:

        int yas;

        scanf("%d", &yas);

    Burada %d, kullanýcýnýn int deðer gireceðini belirtir.

    &yas ise yas deðiþkeninin bellekteki adresini belirtir.

    Þimdilik & iþaretini:
        "scanf'in deðeri deðiþkene yazabilmesi için adresi veriyoruz"
    þeklinde düþünebilirsin.

    Pointer konusunda bunun nedenini daha ayrýntýlý göreceðiz.
    */

    int yas;
    float boy;

    printf("\n=== KULLANICI GIRIS PANELI ===\n");

    // Kullanýcýdan int türünde veri alýyoruz.
    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);

    // Kullanýcýdan float türünde veri alýyoruz.
    printf("Boyunuzu metre cinsinden giriniz (orn: 1.75): ");
    scanf("%f", &boy);


    printf("\n--- Girilen Bilgiler ---\n");

    printf("Yasiniz: %d\n", yas);
    printf("Boyunuz: %.2f m\n", boy);


    /*
    ============================================================
                    4. SABÝT DEÐER - const
    ============================================================

    const ile bir deðiþkenin deðerinin sonradan deðiþtirilmesini engelleyebiliriz.

    Örneðin:

        const int maksimumNot = 100;

    maksimumNot = 90; // HATA

    Çünkü const ile tanýmlanan deðer deðiþtirilemez.
    */

    const int maksimumNot = 100;

    printf("Maksimum Not: %d\n", maksimumNot);

}
