#include <stdio.h>

int main() {

    // ============================================================
    // 1. POINTER NEDÝR?
    // ============================================================
    
	/*
        Normal bir deðiþken, doðrudan bir DEÐER tutar.

        Örneðin: int sayi = 10;

        Burada: sayi -> 10 deðerini tutar.

        Pointer ise bir deðiþkenin DEÐERÝNÝ deðil, BELLEK ADRESÝNÝ tutar.

        Yani:
        sayi    -> 10
        &sayi   -> sayi deðiþkeninin bellek adresi
        *pointer -> o adresteki deðer
    */


    // ============================================================
    // 2. NORMAL DEÐÝÞKEN
    // ============================================================

    int sayi = 10;

    printf("Sayi: %d\n", sayi);


    // ============================================================
    // 3. DEÐÝÞKENÝN ADRESÝNÝ BULMA -> &
    // ============================================================
    /*
        & operatörü bir deðiþkenin BELLEK ADRESÝNÝ verir.

        &sayi -> sayi deðiþkeninin bellekte bulunduðu adres
    */

    printf("Sayi'nin adresi: %p\n", (void*)&sayi);


    // ============================================================
    // 4. POINTER TANIMLAMA
    // ============================================================
    
    /*
        Pointer tanýmlarken: veri_tipi *pointerAdi;
 			þeklinde kullanýlýr.

        Örneðin: int *ptr;
        	Bu pointer bir int deðiþkeninin adresini tutabilir.
    */

    int *ptr;


    // ============================================================
    // 5. POINTER'A ADRES ATAMA
    // ============================================================
    
    /*
        ptr = &sayi;

        Burada:
        
        sayi -> 10
        &sayi -> sayi'nin adresi
        ptr -> sayi'nin adresini tutuyor
    */

    ptr = &sayi;

    printf("Pointer'in tuttugu adres: %p\n", (void*)ptr);


    // ============================================================
    // 6. POINTER ÝLE DEÐERE ULAÞMA -> *
    // ============================================================
    
	/*
        * operatörü pointer'ýn gösterdiði adresteki DEÐERE ulaþmamýzý saðlar.

        ptr -> adres
        *ptr -> o adresteki deðer

        Örneðin:

        sayi = 10
        ptr = &sayi

        *ptr -> 10
    */

    printf("Pointer ile deger: %d\n", *ptr);


    // ============================================================
    // 7. DEÐERÝ POINTER ÜZERÝNDEN DEÐÝÞTÝRME
    // ============================================================
    
    /*
        Pointer'ýn en önemli özelliklerinden biri:

        Pointer üzerinden asýl deðiþkenin deðerini deðiþtirebiliriz.

        *ptr = 50;

        dediðimizde sayi deðiþkeninin deðeri de deðiþir.
    */

    *ptr = 50;

    printf("Yeni sayi degeri: %d\n", sayi);


    // ============================================================
    // 8. AYNI DEÐÝÞKENÝ ÜÇ FARKLI ÞEKÝLDE GÖRME
    // ============================================================

    printf("\n--- Pointer Mantigi ---\n");

    printf("sayi       : %d\n", sayi);
    printf("&sayi      : %p\n", (void*)&sayi);
    printf("ptr        : %p\n", (void*)ptr);
    printf("*ptr       : %d\n", *ptr);


    // ============================================================
    // 9. POINTER'IN ADRESÝ
    // ============================================================
    
    /*
        Pointer'ýn kendisinin de bellekte bir adresi vardýr.

        ptr -> sayi'nin adresini tutar.

        &ptr -> ptr pointer'ýnýn kendi adresidir.

        Yani:

        sayi
        &sayi

        ptr
        &ptr

        birbirinden farklý þeylerdir.
    */

    printf("\nPointer'in kendi adresi: %p\n", (void*)&ptr);


    // ============================================================
    // 10. FARKLI VERÝ TÝPLERÝNDE POINTER
    // ============================================================

    int yas = 20;
    float boy = 1.75f;
    char harf = 'A';

    int *yasPtr = &yas;
    float *boyPtr = &boy;
    char *harfPtr = &harf;

    printf("\n--- Farkli Pointerlar ---\n");

    printf("Yas: %d\n", *yasPtr);
    printf("Boy: %.2f\n", *boyPtr);
    printf("Harf: %c\n", *harfPtr);


    // ============================================================
    // 11. POINTER ÝLE DEÐER DEÐÝÞTÝRME
    // ============================================================

    *yasPtr = 25;
    *boyPtr = 1.80f;
    *harfPtr = 'B';

    printf("\n--- Degistirilmis Degerler ---\n");

    printf("Yas: %d\n", yas);
    printf("Boy: %.2f\n", boy);
    printf("Harf: %c\n", harf);


    // ============================================================
    // 12. NULL POINTER
    // ============================================================
    /*
        Bir pointer herhangi bir adresi göstermiyorsa NULL olarak tanýmlanabilir.

        int *ptr = NULL;

        NULL pointer'ý kullanmadan önce kontrol etmek önemlidir.

        Çünkü NULL adresine eriþmeye çalýþmak programýn çökmesine neden olabilir.
    */

    int *bosPtr = NULL;

    if (bosPtr == NULL) {
        printf("\nPointer herhangi bir adres gostermiyor.\n");
    }


    // ============================================================
    // 13. POINTER KULLANIRKEN ÖNEMLÝ NOKTA
    // ============================================================
    /*
        Pointer'ýn veri tipi, gösterdiði deðiþkenin veri tipiyle uyumlu olmalýdýr.

        int  -> int*
        float -> float*
        char -> char*

        Örneðin:

        int sayi = 10;
        int *ptr = &sayi;

        doðru kullanýmdýr.
    */


    // ============================================================
    // 14. POINTER MANTIÐININ KISA ÖZETÝ
    // ============================================================
    /*
        int sayi = 10;

        int *ptr = &sayi;


        sayi
        L¦¦ 10


        &sayi
        L¦¦ sayi'nin bellek adresi


        ptr
        L¦¦ sayi'nin adresini tutuyor


        *ptr
        L¦¦ sayi'nin deðerine ulaþýr
        L¦¦ 10


        Önemli:

        &  -> adresini al
        *  -> adresteki deðere ulaþ


        Örneðin:

        ptr = &sayi;

        &sayi -> adres
        ptr   -> adres
        *ptr  -> deðer
    */

}
