#include <stdio.h>

main()
{
    /*
    ============================================================
                         WHILE DÖNGÜSÜ
    ============================================================

    while döngüsü, verilen koþul TRUE olduðu sürece içerisindeki kodlarý tekrar tekrar çalýþtýrýr.

    Genel yapýsý:

        while (koþul)
        {
            // Tekrarlanacak kodlar
        }

    for döngüsünden farklý olarak baþlangýç ve deðiþim kýsmý while parantezinin içinde bulunmaz.

    Bu iþlemleri kendimiz yaparýz.
    */

    /*
    ============================================================
                    1. TEMEL WHILE ÖRNEÐÝ
    ============================================================
    */

    int i = 0;

    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }

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
                    2. 1'DEN 10'A KADAR
    ============================================================
    */

    i = 1;

    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n");


    /*
    ============================================================
                    3. GERÝYE DOÐRU SAYMA
    ============================================================
    */

    i = 10;

    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }

    printf("\n");


    /*
    ============================================================
                    4. 2'ÞER 2'ÞER ARTIRMA
    ============================================================
    */

    i = 0;

    while (i <= 10)
    {
        printf("%d ", i);
        i += 2;
    }

    printf("\n");


    /*
    ============================================================
                    5. TOPLAMA ÝÞLEMÝ
    ============================================================
    */

    int toplam = 0;
    int sayi = 1;

    while (sayi <= 5)
    {
        toplam += sayi; // toplam = toplam + sayi;
        sayi++;
    }

    printf("Toplam: %d\n", toplam);

    /*
    Hesaplama:

    toplam = 0

    sayi = 1 -> toplam = 1
    sayi = 2 -> toplam = 3
    sayi = 3 -> toplam = 6
    sayi = 4 -> toplam = 10
    sayi = 5 -> toplam = 15

    Sonuç: 15
    */


    /*
    ============================================================
                    6. KULLANICI ÝLE WHILE
    ============================================================

    while sadece belirli sayýda tekrar için kullanýlmaz.

    Kullanýcý belirli bir deðer girene kadar iþlemi devam ettirebiliriz.
    */

    int girilen;

    printf("0 girerek programi bitirebilirsiniz.\n");
    printf("Bir sayi girin: ");
    scanf("%d", &girilen);

    while (girilen != 0)
    {
        printf("Girdiginiz sayi: %d\n", girilen);
        printf("Tekrar bir sayi girin: ");
        scanf("%d", &girilen);
    }

    printf("Program sonlandi.\n");

    /*
    Kullanýcý 0 girmediði sürece:

        1. Sayýyý yazdýr.
        2. Yeni sayý iste.
        3. Yeni sayýyý kontrol et.

    Kullanýcý 0 girerse:

        girilen != 0

    þartý FALSE olur ve döngü sona erer.
    */


    /*
    ============================================================
                         7. BREAK
    ============================================================

    break bulunduðu döngüyü tamamen sonlandýrýr.
    */

    i = 1;

    while (i <= 10)
    {
        if (i == 5)
        {
            break;
        }

        printf("%d ", i);
        i++;
    }

    printf("\n");

    /*
    ÇIKTI:

    1 2 3 4

    i = 5 olduðunda break çalýþýr ve while döngüsü tamamen sona erer.
    */


    /*
    ============================================================
                       8. CONTINUE
    ============================================================

    continue mevcut turdaki kalan kodlarý atlar ve sonraki tura geçer.
    */

    i = 0;

    while (i < 5)
    {
        i++;

        if (i == 3)
        {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n");

    /*
    ÇIKTI:

    1 2 4 5

    i = 3 olduðunda continue çalýþýr.

    printf çalýþtýrýlmaz ve sonraki tura geçilir.
    */


    /*
    ============================================================
                         ÖNEMLÝ
    ============================================================

    while kullanýrken döngü deðiþkenini deðiþtirmeyi unutursak sonsuz döngü oluþabilir.

    Örneðin:

        int i = 0;

        while (i < 5)
        {
            printf("%d", i);
        }

    Burada i hiç artýrýlmadýðý için i = 0 olarak kalýr.

    0 < 5 sürekli TRUE olacaðý için döngü bitmez.

    Doðru kullaným:

        int i = 0;

        while (i < 5)
        {
            printf("%d", i);
            i++;
        }
    */
}
