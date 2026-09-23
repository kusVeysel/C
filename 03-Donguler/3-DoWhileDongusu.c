#include <stdio.h>

int main()
{
    /*
    ============================================================
                        DO-WHILE DÖNGÜSÜ
    ============================================================

    do-while döngüsü, while döngüsüne benzer.

    Fakat önemli bir farký vardýr: do-while içerisindeki kod KOÞUL KONTROL EDÝLMEDEN ÖNCE 1 KEZ ÇALIÞIR.

    Genel yapýsý:

        do
        {
            // Çalýþacak kodlar
        }
        while (koþul);

    Yani:

        1. Önce do içerisindeki kod çalýþýr.
        2. Sonra koþul kontrol edilir.
        3. Koþul TRUE ise tekrar çalýþýr.
        4. FALSE ise döngü biter.
    */


    /*
    ============================================================
                    1. TEMEL DO-WHILE
    ============================================================
    */

    int i = 0;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);


    /*
    ÇIKTI:

    0
    1
    2
    3
    4
    */


    /*
    ============================================================
                    2. WHILE ÝLE FARKI
    ============================================================

    Buradaki fark çok önemlidir.

    while: Koþulu ÖNCE kontrol eder. Koþul FALSE ise hiç çalýþmayabilir.

    do-while: Önce kodu çalýþtýrýr.  Koþulu SONRA kontrol eder. Bu yüzden en az 1 kez çalýþýr.
    */


    int sayi = 10;

    while (sayi < 5)
    {
        printf("while calisti\n");
    }


    sayi = 10;

    do
    {
        printf("do-while calisti\n");
    }
    while (sayi < 5);


    /*
    ÇIKTI: do-while calisti

    Çünkü:

        sayi = 10

        10 < 5 -> FALSE

    olmasýna raðmen do-while içerisindeki kod koþul kontrol edilmeden önce 1 kez çalýþtý.
    */


    /*
    ============================================================
                    3. 1'DEN 10'A KADAR
    ============================================================
    */

    i = 1;

    do
    {
        printf("%d ", i);
        i++;
    }
    while (i <= 10);
    printf("\n");


    /*
    ============================================================
                    4. GERÝYE DOÐRU SAYMA
    ============================================================
    */

    i = 10;

    do
    {
        printf("%d ", i);
        i--;
    }
    while (i >= 1);
    printf("\n");


    /*
    ============================================================
                    5. KULLANICIDAN VERÝ ALMA
    ============================================================

    do-while özellikle kullanýcýdan veri alýnan iþlemlerde oldukça kullanýþlýdýr.

    Çünkü kullanýcýnýn en az 1 kez iþlem yapmasýný saðlayabiliriz.
    */

    int girilen;

    do
    {
        printf("Bir sayi girin (0 = cikis): ");
        scanf("%d", &girilen);
        printf("Girdiginiz sayi: %d\n", girilen);

    }
    while (girilen != 0);
    printf("Program sonlandi.\n");


    /*
    ============================================================
                    6. MENÜ YAPISI
    ============================================================

    do-while menülerde sýk kullanýlýr.

    Kullanýcý 0 seçeneðini seçene kadar menüyü tekrar gösterebiliriz.
    */

    int secim;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Profil\n");
        printf("2 - Ayarlar\n");
        printf("3 - Yardim\n");
        printf("0 - Cikis\n");

        printf("Seciminiz: ");
        scanf("%d", &secim);

        if (secim == 1)
        {
            printf("Profil secildi.\n");
        }
        else if (secim == 2)
        {
            printf("Ayarlar secildi.\n");
        }
        else if (secim == 3)
        {
            printf("Yardim secildi.\n");
        }
        else if (secim == 0)
        {
            printf("Cikis yapiliyor...\n");
        }
        else
        {
            printf("Gecersiz secim!\n");
        }
    }
    while (secim != 0);


    /*
    ============================================================
                         7. BREAK
    ============================================================

    break do-while döngüsünü tamamen sonlandýrýr.
    */

    i = 1;

    do
    {
        if (i == 5)
        {
            break;
        }

        printf("%d ", i);
        i++;
    }
    while (i <= 10);

    printf("\n");


    /*
    ÇIKTI: 1 2 3 4

    i = 5 olduðunda break çalýþýr ve döngü tamamen sona erer.
    */


    /*
    ============================================================
                        8. CONTINUE
    ============================================================

    continue mevcut turu atlayarak sonraki tura geçer.
    */

    i = 0;

    do
    {
        i++;

        if (i == 3)
        {
            continue;
        }
        printf("%d ", i);
    }
    while (i < 5);

    
	// ÇIKTI: 1 2 4 5

}
