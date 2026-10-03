#include <stdio.h>
#include <stdlib.h> // atoi için gerekli olan kütüphanedir.

int main(int argc, char *argv[]) { // argv: parametre olarak girilen string deðerler, argc: program adý dahil girilen string deðerlerin adedidir.
    if (argc < 2) { // Hiç parametre girilmediðinde çökmesini engellemek için kontrol.
        printf("Lutfen parametre giriniz.\n");
        return 1;
    }
	
	printf("Programin bilgisayarda kayitli oldugu yer: %s",argv[0]);

    int eleman_sayisi = argc - 1; // Program adý (argv[0]) hariç parametre sayýsý
    int dizi[eleman_sayisi];
    int i, toplam = 0;
    
    for (i = 1; i < argc; i++) {
        printf("%d. argv = %s\n", i, argv[i]);
        dizi[i - 1] = atoi(argv[i]); // String ifadeleri integer deðere çevirip diziye atar
    }
    
    for (i = 0; i < eleman_sayisi; i++) {
        printf("%d. argv ama int = %d\n", i + 1, dizi[i]);
        toplam += dizi[i]; // Ekrana bastýrýrken ayný döngüde toplam hesabý yapýlýr
    }
    
    printf("int'e cevrilmis argv'lerin toplami: %d\n", toplam);
}
// Parametre girmek için -> Üst menü -> Çalýþtýr -> Parametreler... -> Programýnýza yapýþtýrýlacak parametreler: -> Textbox kýsmýna istediðiniz deðerleri yazýn
// !! Parametre olarak sayý bile girseniz, örneðin: 4, 90, 2... bunlar stringtir, yani: "4", "90", "2"
