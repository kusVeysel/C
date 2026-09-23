#include <stdio.h>

main()
{
    /*
    ============================================================
                    3 BOYUTLU DÝZÝLER
    ============================================================

    3 boyutlu diziler verileri 3 farklý boyutta saklar.

    Genel yapý: veri_tipi dizi[boyut1][boyut2][boyut3];

    Örnek: int sayilar[2][3][4];

    Burada:
        2 -> katman sayýsý
        3 -> satýr sayýsý
        4 -> sütun sayýsý

    Toplam eleman: 2 x 3 x 4 = 24

	1 boyutlu: dizi[sütun]

    2 boyutlu: dizi[satýr][sütun]

    3 boyutlu: dizi[katman][satýr][sütun]
    */

    // 1. 3 BOYUTLU DÝZÝ TANIMLAMA
    int sayilar[2][3][4];

    /*
    sayilar:
        2 katman
        Her katmanda 3 satýr
        Her satýrda 4 sütun
    */

    // 2. DEÐERLERLE TANIMLAMA
    int matris[2][2][3] =
    {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    /*
    matris[2][2][3]

        2 katman
        2 satýr
        3 sütun

    Toplam:
        2 x 2 x 3 = 12 eleman

    1. katman:
        1  2  3
        4  5  6

    2. katman:
        7  8  9
        10 11 12
    */

    // 3. ELEMANLARA ERÝÞME
    printf("matris[0][0][0] = %d\n", matris[0][0][0]);
    printf("matris[0][1][2] = %d\n", matris[0][1][2]);
    printf("matris[1][0][0] = %d\n", matris[1][0][0]);
    printf("matris[1][1][2] = %d\n", matris[1][1][2]);

    /*
    matris[1][1][2]:

        1 -> 2. katman
        1 -> 2. satýr
        2 -> 3. sütun

    Sonuç: 12
    */

    // 4. TÜM ELEMANLARI YAZDIRMA
    /*
    3 boyutlu diziyi dolaþmak için 3 tane iç içe for döngüsü kullanýlýr.

    1. for -> katman
    2. for -> satýr
    3. for -> sütun
    */

    int i, j, k;

    printf("\nTum elemanlar:\n");

    for (i = 0; i < 2; i++)
    {
        printf("\n--- Katman %d ---\n", i);

        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", matris[i][j][k]);
            }

            printf("\n");
        }
    }

    // 5. KULLANICIDAN DEÐER ALMA
    /*
    2 x 2 x 2 = 8 eleman vardýr.
    3 iç içe döngü ile bütün elemanlarý dolduruyoruz.
    */

    int sayilar3[2][2][2];

    printf("\n3 boyutlu dizi icin 8 sayi giriniz:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("[%d][%d][%d]: ", i, j, k);
                scanf("%d", &sayilar3[i][j][k]);
            }
        }
    }

    // 6. GÝRÝLEN DEÐERLERÝ YAZDIRMA
    printf("\nGirdiginiz degerler:\n");

    for (i = 0; i < 2; i++)
    {
        printf("\n--- Katman %d ---\n", i);

        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d ", sayilar3[i][j][k]);
            }

            printf("\n");
        }
    }

    // 7. 3 BOYUTLU DÝZÝDE TOPLAMA
    int toplam = 0;

    int sayilar4[2][2][2] =
    {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    // Bütün katman, satýr ve sütunlarý dolaþýyoruz.
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                toplam += sayilar4[i][j][k];
            }
        }
    }

    printf("\nToplam: %d\n", toplam);

    
	// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36
    

    // 8. sizeof ÝLE TOPLAM ELEMAN SAYISINI BULMA
    int veri[2][3][4];

    int elemanSayisi =
        sizeof(veri) / sizeof(veri[0][0][0]);

    printf("Toplam eleman sayisi: %d\n", elemanSayisi);

    /*
    2 x 3 x 4 = 24

    sizeof(veri) -> dizinin tamamýnýn bellekte kapladýðý alan.

    sizeof(veri[0][0][0]) -> tek bir elemanýn kapladýðý alan.

    Bölerek: toplam eleman sayýsýný buluyoruz.
    */

    /*
    ============================================================
                         ÖZET
    ============================================================

    1 BOYUTLU:
        int dizi[5];

        dizi[index]


    2 BOYUTLU:
        int dizi[3][4];

        dizi[satýr][sütun]


    3 BOYUTLU:
        int dizi[2][3][4];

        dizi[katman][satýr][sütun]


    3 boyutlu dizide:

        for -> katman
            for -> satýr
                for -> sütun

    Örnek:

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 4; k++)
                {
                    printf("%d", dizi[i][j][k]);
                }
            }
        }
    */
}
