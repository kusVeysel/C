#include <stdio.h>   // temel girdi (input) ve çýktý (output) iþlemlerini yapabilmek için kullanýlan standart kütüphanedir.
#include <stdbool.h> // bool, true ve false için.

main()
{
    /*
    ============================================================
    1. DEÐÝÞKENLER VE VERÝ TÝPLERÝ
    ============================================================
    Deðiþkenler, program içerisinde veri saklamak için kullanýlýr.

    int    -> Tam sayýlar
    float  -> Ondalýklý sayýlar
    double -> Daha yüksek hassasiyetli ondalýklý sayýlar
    char   -> Tek karakter
    bool   -> true veya false

    Deðiþken tanýmlama: veri_tipi deðiþken_adý = deðer;

    Örnek: int yas = 20;

    'A' -> Tek karakter (char)
    "A" -> Karakter dizisi (string)
    */

    int ogrenciNo = 101;
    float ortalama = 85.75f;
    double hassasHesap = 12.3456789;
    char harfNotu = 'A';
    bool ogrenciMi = true;

    /*
    ============================================================
    2. DEÐÝÞKENÝN DEÐERÝNÝ DEÐÝÞTÝRME
    ============================================================
    Deðiþkenlerin deðerleri sonradan deðiþtirilebilir.

        ogrenciNo = 11;

    "=" burada atama operatörüdür:
    "11 deðerini ogrenciNo deðiþkenine ata."
    */

    ogrenciNo = 11;

    /*
    ============================================================
    3. printf() - EKRANA YAZDIRMA
    ============================================================
    printf() ekrana bilgi yazdýrýr.

    %d -> int
    %f -> float / double
    %c -> char
    %s -> string
    %d -> bool (true = 1, false = 0)

    \n  -> Yeni satýr
    %.2f -> Ondalýktan sonra 2 basamak gelir
    %.3f -> Ondalýktan sonra 3 basamak gelir
    %.7f -> Ondalýktan sonra 7 basamak gelir
    */

    printf("=== OGRENCI BILGI SISTEMI ===\n");
    printf("No: %d\n", ogrenciNo);
    printf("Ortalama: %.2f\n", ortalama);
    printf("Harf Notu: %c\n", harfNotu);
    printf("Hassas Deger: %.7f\n", hassasHesap);
    printf("Ogrenci Mi: %d\n", ogrenciMi);

    /*
    ============================================================
    4. scanf() - KULLANICIDAN VERÝ ALMA
    ============================================================
    scanf() kullanýcýdan veri alýr.

    %d  -> int
    %f  -> float
    %lf -> double
    %c  -> char
    %s  -> string

    &yas -> yas deðiþkeninin bellekteki adresi.

    scanf(), girilen deðeri deðiþkene yazabilmek için deðiþkenin adresine ihtiyaç duyar. Pointer konusunda & iþaretini daha ayrýntýlý göreceðiz.
    */

    int yas;
    float boy;

    printf("\n=== KULLANICI GIRIS PANELI ===\n");

    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);

    printf("Boyunuzu metre cinsinden giriniz (orn: 1.75): ");
    scanf("%f", &boy);

    printf("\n--- Girilen Bilgiler ---\n");
    printf("Yasiniz: %d\n", yas);
    printf("Boyunuz: %.2f m\n", boy);

    /*
    ============================================================
    5. const - SABÝT DEÐER
    ============================================================
    const ile tanýmlanan deðiþkenin deðeri sonradan deðiþtirilemez.

        const int maksimumNot = 100;

    Daha sonra: maksimumNot = 90;
    	yazýlýrsa derleme hatasý oluþur.
    */

    const int maksimumNot = 100;
    printf("Maksimum Not: %d\n", maksimumNot);
}
