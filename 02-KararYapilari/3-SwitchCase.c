#include <stdio.h>

main(){
	
    /*
    ============================================================
                        	switch
    ============================================================

    Bir deðiþkenin belirli deðerlerden hangisine eþit olduðunu kontrol etmek için kullanýlýr.

    Yapýsý:

        switch (deger)
        {
            case 1:
                // ...
                break;

            case 2:
                // ...
                break;

            default:
                // Hiçbir case eþleþmezse
        }

    break: switch bloðundan çýkýlmasýný saðlar.break olmazasa þartý saðlayan case'den sonraki diðer caseler de çalýþýr. Dongulerde tekrar anlatýlmaktadýr.

    default: Hiçbir case eþleþmediðinde çalýþýr.
    */

    int secim = 2;

    switch (secim)
    {
        case 1:
            printf("Ana Sayfa\n");
            break;

        case 2:
            printf("Profil\n");
            break;

        case 3:
            printf("Ayarlar\n");
            break;

        default:
            printf("Gecersiz secim.\n");
            break;
    }


    /*
    ============================================================
                    	switch ÝLE NOT SÝSTEMÝ
    ============================================================
    */

    char harfNotu = 'B';

    switch (harfNotu)
    {
        case 'A':
            printf("Cok iyi.\n");
            break;

        case 'B':
            printf("Iyi.\n");
            break;

        case 'C':
            printf("Orta.\n");
            break;

        case 'D':
            printf("Gelistirilmeli.\n");
            break;

        case 'F':
            printf("Basarisiz.\n");
            break;

        default:
            printf("Gecersiz not.\n");
            break;
    }
}
