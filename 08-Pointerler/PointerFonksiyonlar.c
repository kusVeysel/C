#include <stdio.h>

/*
    ============================================================
    POINTER + FONKSÝYONLAR
    ============================================================

    Pointer, bir deðiþkenin bellekteki adresini tutan deðiþkendir.

    &  -> deðiþkenin adresini alýr.
    *  -> pointer'ýn gösterdiði adresteki deðere ulaþýr.

    Örneðin:

        int sayi = 10;
        int *ptr = &sayi;

        sayi   -> 10
        &sayi  -> sayi'nin adresi
        ptr    -> sayi'nin adresini tutar
        *ptr   -> 10

    Pointerlarýn fonksiyonlarda en önemli kullaným amacý, fonksiyonun dýþarýdaki gerçek deðiþkenin deðerini deðiþtirebilmesini saðlamaktýr.
*/


// ============================================================
// 1. NORMAL FONKSÝYON - DEÐERÝN KOPYASI GÖNDERÝLÝR
// ============================================================

void normalDegistir(int sayi) {

    // Buradaki sayi, main'deki sayi'nin kopyasýdýr.
    sayi = 100;
}


// ============================================================
// 2. POINTER ÝLE DEÐER DEÐÝÞTÝRME
// ============================================================

void pointerIleDegistir(int *sayi) {

    /*
        int *sayi: Fonksiyon bir int deðiþkeninin adresini alýyor.

        *sayi: Gelen adresteki gerçek deðere ulaþýr.
    */

    *sayi = 100;
}


// ============================================================
// 3. ÝKÝ DEÐÝÞKENÝN YERÝNÝ DEÐÝÞTÝRME
// ============================================================

void yerDegistir(int *a, int *b) {

    /*
        Fonksiyona iki deðiþkenin adresi gönderiliyor.

        *a -> gerçek a deðiþkenine ulaþýr.
        *b -> gerçek b deðiþkenine ulaþýr.
    */

    int gecici;

    // a'nýn deðerini geçici deðiþkende tut.
    gecici = *a;

    // b'nin deðerini a'ya aktar.
    *a = *b;

    // Eski a deðerini b'ye aktar.
    *b = gecici;
}


// ============================================================
// 4. BÝRDEN FAZLA DEÐER DEÐÝÞTÝRME
// ============================================================

void bilgilerDegistir(int *yas, float *boy, char *harf) {

    /*
        Fonksiyon üç farklý deðiþkenin adresini alýyor.

        int *yas -> int deðiþkeninin adresini tutar.

        float *boy -> float deðiþkeninin adresini tutar.

        char *harf -> char deðiþkeninin adresini tutar.
    */

    *yas = 25;
    *boy = 1.80f;
    *harf = 'B';
}


// ============================================================
// 5. FONKSÝYONDAN BÝRDEN FAZLA SONUÇ ALMA
// ============================================================

void hesapla(int a, int b, int *toplam, int *carpim) {

    /*
        Normalde bir fonksiyon return ile tek bir deðer döndürebilir.

        Pointer kullanarak birden fazla deðiþkene sonuç yazabiliriz.

        *toplam -> toplam deðiþkeninin kendisi
        *carpim -> carpim deðiþkeninin kendisi
    */

    *toplam = a + b;
    *carpim = a * b;
}


// ============================================================
// ANA PROGRAM
// ============================================================

int main() {

    // ========================================================
    // 1. NORMAL FONKSÝYONDA DEÐER DEÐÝÞTÝRME
    // ========================================================

    int sayi1 = 10;

    printf("Normal fonksiyondan once: %d\n", sayi1);

    normalDegistir(sayi1);

    /*
        Burada sayi1'in sadece deðeri gönderildi.

        Fonksiyon içerisinde oluþturulan sayi, main'deki sayi1'in kopyasýdýr.

        Bu nedenle sayi1 deðiþmez.
    */

    printf("Normal fonksiyondan sonra: %d\n\n", sayi1);


    // ========================================================
    // 2. POINTER ÝLE DEÐER DEÐÝÞTÝRME
    // ========================================================

    int sayi2 = 10;

    printf("Pointer fonksiyonundan once: %d\n", sayi2);

    /*
        &sayi2: sayi2 deðiþkeninin bellekteki adresini gönderiyoruz.
    */

    pointerIleDegistir(&sayi2);

    /*
        Fonksiyon adresi aldýðý için, gerçek sayi2 deðiþkenine ulaþabiliyor.

        Fonksiyon içerisinde: *sayi = 100;
	 		yapýldýðýnda sayi2'nin gerçek deðeri deðiþiyor.
    */

    printf("Pointer fonksiyonundan sonra: %d\n\n", sayi2);


    // ========================================================
    // 3. POINTER'IN TEMEL MANTIÐI
    // ========================================================

    int sayi3 = 50;

    // ptr, sayi3'ün adresini tutuyor.
    int *ptr = &sayi3;

    printf("Sayi: %d\n", sayi3);

    // sayi3'ün bellekteki adresi.
    printf("Sayi adresi: %p\n", (void*)&sayi3);

    // ptr'nin tuttuðu adres.
    printf("Pointer adres degeri: %p\n", (void*)ptr);

    // Pointer'ýn gösterdiði yerdeki gerçek deðer.
    printf("Pointer ile deger: %d\n\n", *ptr);


    // ========================================================
    // 4. POINTER ÜZERÝNDEN DEÐER DEÐÝÞTÝRME
    // ========================================================

    *ptr = 75;

    /*
        *ptr = 75;
        	demek: "ptr'nin gösterdiði adresteki deðeri 75 yap."

        ptr -> sayi3'ün adresini tuttuðu için sayi3'ün gerçek deðeri deðiþir.
    */

    printf("Pointer ile degistirilen sayi: %d\n\n", sayi3);


    // ========================================================
    // 5. ÝKÝ SAYININ YERÝNÝ DEÐÝÞTÝRME
    // ========================================================

    int a = 10;
    int b = 20;

    printf("Yer degistirmeden once:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    /*
        &a -> a'nýn adresi
        &b -> b'nin adresi

        Fonksiyona deðer deðil, deðiþkenlerin adresleri gönderiliyor.
    */

    yerDegistir(&a, &b);

    printf("\nYer degistirdikten sonra:\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);


    // ========================================================
    // 6. BÝRDEN FAZLA DEÐÝÞKENÝ POINTER ÝLE DEÐÝÞTÝRME
    // ========================================================

    int yas = 20;
    float boy = 1.70f;
    char harf = 'A';

    printf("Degistirmeden once:\n");
    printf("Yas  : %d\n", yas);
    printf("Boy  : %.2f\n", boy);
    printf("Harf : %c\n", harf);

    /*
        Üç deðiþkenin de adresini gönderiyoruz.
    */

    bilgilerDegistir(&yas, &boy, &harf);

    printf("\nDegistirdikten sonra:\n");
    printf("Yas  : %d\n", yas);
    printf("Boy  : %.2f\n", boy);
    printf("Harf : %c\n\n", harf);


    // ========================================================
    // 7. FONKSÝYONDAN BÝRDEN FAZLA SONUÇ ALMA
    // ========================================================

    int toplam;
    int carpim;

    /*
        toplam ve carpim deðiþkenlerinin henüz bir deðeri yok.

        Fonksiyona adreslerini gönderiyoruz.
    */

    hesapla(10, 5, &toplam, &carpim);

    /*
        Fonksiyon içerisinde:

        *toplam = a + b;
        *carpim = a * b;

        iþlemleri yapýldýðý için main içerisindeki deðiþkenlere sonuç yazýlýr.
    */

    printf("Toplam: %d\n", toplam);
    printf("Carpim: %d\n\n", carpim);


    // ========================================================
    // 8. SCANF ÝLE POINTER MANTIÐI
    // ========================================================

    int kullaniciYasi;

    printf("Yasinizi giriniz: ");

    /*
        scanf de adres ister.

        &kullaniciYasi: kullaniciYasi deðiþkeninin adresini scanf'e gönderiyoruz.

        scanf bu adresi kullanarak kullanýcýnýn girdiði deðeri doðrudan kullaniciYasi deðiþkenine yazar.
    */

    scanf("%d", &kullaniciYasi);

    printf("Girdiginiz yas: %d\n", kullaniciYasi);


    // ========================================================
    // POINTER MANTIÐININ ÖZETÝ
    // ========================================================

    /*
        int sayi = 10;

        int *ptr = &sayi;


        sayi -> Deðeri tutar.

        &sayi -> sayi'nin adresini verir.

        ptr -> sayi'nin adresini tutar.

        *ptr -> ptr'nin gösterdiði adresteki gerçek deðere ulaþýr.


        FONKSÝYONDA:
	        void degistir(int *ptr)
	        {
	            *ptr = 100;
	        }

        Çaðýrýrken: degistir(&sayi);

        Yani:
	        &  -> ADRESÝ AL
	        *  -> ADRESTEKÝ DEÐERE ULAÞ


        Genel yapý:
	        Deðiþken:
	            int sayi = 10;
	
	        Pointer:
	            int *ptr = &sayi;
	
	        Fonksiyona adres gönderme:
	            degistir(&sayi);
	
	        Fonksiyon içerisinde gerçek deðere ulaþma:
	            *ptr
    */

}

