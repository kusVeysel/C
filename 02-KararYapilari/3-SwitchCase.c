#include <stdio.h>

main()
{
    /*
    ============================================================
                            SWITCH
    ============================================================

    Bir deðiþkenin belirli deðerlerden hangisine eþit olduðunu kontrol etmek için kullanýlýr.

    Yapýsý:

        switch (deger)
        {
            case 1:
                // yapýlacak iþlem
                break;

            case 2:
                // yapýlacak iþlem
                break;

            default:
                // Hiçbir case eþleþmezse çalýþýr.
        }

    break: Ýçinde bulunduðu switch bloðundan çýkar. Döngülerde tekrar göreceðiz.

    break yazýlmazsa eþleþen case'den sonraki case'ler de çalýþmaya devam edebilir. Buna "fall-through" denir.

    default: Hiçbir case eþleþmezse çalýþýr.
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
                       SWITCH ÝLE NOT SÝSTEMÝ
    ============================================================

    char karakterlerle çalýþabildiði için harf notlarýnda switch kullanabiliriz.

    'A', 'B', 'C' gibi karakterler tek týrnak içinde yazýlýr.
    */

    char harfNotu;
    printf("Büyük harfle harf notu giriniz: ");
	scanf("%c",&harfNotu);

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
