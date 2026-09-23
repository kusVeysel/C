#include <stdio.h>

main()
{
    /*
    ============================================================
                    2 BOYUTLU DÝZÝLER
    ============================================================

    2 boyutlu diziler verileri SATIR ve SÜTUN þeklinde saklar.

    Örneðin:

        1  2  3
        4  5  6
        7  8  9

    Burada:
        3 satýr
        3 sütun
        9 eleman vardýr.

    Genel yapý: veri_tipi dizi[satýr][sütun];

    Örneðin: int sayilar[3][3];
    */

    int sayilar[3][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    /*
    ============================================================
                        ELEMANLARA ERÝÞME
    ============================================================

    2 boyutlu dizilerde iki indeks kullanýlýr: dizi[satýr][sütun]

    Ýndeksler 0'dan baþlar.

        sayilar[0][0] -> 1
        sayilar[0][1] -> 2
        sayilar[0][2] -> 3

        sayilar[1][0] -> 4
        sayilar[1][1] -> 5
        sayilar[1][2] -> 6

        sayilar[2][0] -> 7
        sayilar[2][1] -> 8
        sayilar[2][2] -> 9
    */

    printf("sayilar[0][0] = %d\n", sayilar[0][0]);
    printf("sayilar[1][1] = %d\n", sayilar[1][1]);
    printf("sayilar[2][2] = %d\n", sayilar[2][2]);


    /*
    ============================================================
                    TÜM ELEMANLARI YAZDIRMA
    ============================================================

    2 boyutlu dizilerde genellikle iç içe for kullanýlýr.

    Dýþ for -> Satýrlarý gezer.
    Ýç for  -> Sütunlarý gezer.
    */

    int i, j;

    printf("\nDizi:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sayilar[i][j]);
        }

        // Bir satýr bittikten sonra alt satýra geç.
        printf("\n");
    }


    /*
    ============================================================
                    ELEMAN DEÐÝÞTÝRME
    ============================================================

    Ýndeks kullanarak belirli bir elemana yeni deðer verebiliriz.

    sayilar[1][2]:

        1 -> 2. satýr
        2 -> 3. sütun

    */

    sayilar[1][2] = 100;

    printf("\nYeni deger: %d\n", sayilar[1][2]);


    /*
    ============================================================
                    KULLANICIDAN VERÝ ALMA
    ============================================================

    Ýç içe for kullanarak matrisin bütün elemanlarýný kullanýcýdan alabiliriz.
    */

    int matris[2][3];

    printf("\n2x3 matris icin degerleri giriniz:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }


    /*
    ============================================================
                    MATRÝSÝ YAZDIRMA
    ============================================================
    */

    printf("\nGirdiginiz matris:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matris[i][j]);
        }

        printf("\n");
    }


    /*
    ============================================================
                         ÖZET
    ============================================================

    1 boyutlu dizi:

        int dizi[5];

        dizi[index]


    2 boyutlu dizi:

        int dizi[3][4];

        dizi[satýr][sütun]


    2 boyutlu dizilerde genellikle:

        i -> satýr
        j -> sütun


    Bu yüzden:

        for (i = 0; i < satýr; i++)
        {
            for (j = 0; j < sütun; j++)
            {
                // dizi[i][j]
            }
        }

    þeklinde kullanýlýr.
    */
}
