#include <stdio.h>
#include <string.h>

struct sinif {
    int sayi;
    char ad[10];
};

/*
    typedef ile struct'a yeni bir isim verebiliriz.

    Normal kullaným: struct pointer pntr;
    typedef sayesinde: pointer pntr;
    	yazabiliriz.
*/
typedef struct {
    int sayi2;
    char ad2[15];
} pointer;

/*
    Struct deðiþkenini fonksiyona gönderiyoruz.

    Burada "a" struct sinif türünde bir deðiþkendir. Fonksiyona struct'ýn bir KOPYASI gönderilir.
*/
void gonder(struct sinif a) {
    printf("Gonder fonksiyonu icinde sayi: %d\n", a.sayi);
    printf("Gonder fonksiyonu icinde ad: %s\n", a.ad);
}

main() {
    // struct sinif türünde "snf" adýnda deðiþken oluþturulur.
    struct sinif snf;

    // Struct içerisindeki sayi deðiþkenine deðer atanýr.
    printf("Sayi giriniz: ");
    scanf("%d", &snf.sayi);

    /*
        Struct deðiþkeninin elemanlarýna "." ile ulaþýlýr.
        	snf.sayi
        	snf.ad
    */
    strcpy(snf.ad, "Veysel");

    printf("Struct ad: %s\n", snf.ad);

    /*
        typedef ile oluþturduðumuz struct türünden "pntr" adýnda deðiþken oluþturuyoruz.
    */
    pointer pntr;

    /*
        p pointer'ý pntr struct deðiþkeninin adresini tutar.

        p -> pntr'nin adresi
        *p -> pntr'nin kendisi
    */
    pointer *p = &pntr;

    /*
        Struct'a normal deðiþken üzerinden: pntr.sayi2

        pointer üzerinden: p->sayi2
        	þeklinde ulaþýlýr.

        -> operatörü aslýnda þu kullanýmýn kýsa halidir: (*p).sayi2
    */
    printf("Pointer icin sayi giriniz: ");
    scanf("%d", &p->sayi2);

    strcpy(p->ad2, "Veyselpointer");

    printf("Pointer struct ad: %s\n", p->ad2);

    // snf struct'ýný fonksiyona gönderiyoruz.
    gonder(snf); 
}
