#include <stdio.h>

int main()
{
    /*
    ============================================================
                    2 BOYUTLU DÝZÝLER
    ============================================================

    2 boyutlu diziler, verileri satýr ve sütun þeklinde saklamak için kullanýlýr.

    Örneðin:

        1  2  3
        4  5  6
        7  8  9

    Burada: 3 satýr, 3 sütun vardýr.

    Tanýmlama: veri_tipi dizi[satýr][sütun];

    Örnek: int sayilar[3][3];

    Bu dizi: 3 satýr, 3 sütun, toplam 9 eleman içerir.
    */


    // 3 satýr ve 3 sütundan oluþan 2 boyutlu dizi
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

    2 boyutlu dizilerde iki index kullanýlýr: dizi[satýr][sütun]

    Indexler 0'dan baþlar.

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

    2 boyutlu dizilerde genellikle iç içe for döngüsü kullanýlýr.

    Dýþ döngü  -> Satýrlarý gezer
    Ýç döngü   -> Sütunlarý gezer
    */

    printf("\nDizi:\n");

	int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sayilar[i][j]);
        }

        printf("\n"); // Bir satýr bittikten sonra alt satýra geç.
    }


    /*
    ============================================================
                    ELEMAN DEÐÝÞTÝRME
    ============================================================

    Belirli bir elemana index kullanarak yeni deðer verebiliriz.
    */

    sayilar[1][2] = 100;

    printf("\nYeni deger: %d\n", sayilar[1][2]);


    /*
    ============================================================
                    KULLANICIDAN VERÝ ALMA
    ============================================================

    2 boyutlu dizinin bütün elemanlarýný scanf ile doldurabiliriz.
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

    1 boyutlu dizi: int dizi[5];
        dizi[index]

    2 boyutlu dizi: int dizi[3][4];
        dizi[satýr][sütun]


    2 boyutlu dizilerde:
        i -> satýr
        j -> sütun

    Bu yüzden genellikle:

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
