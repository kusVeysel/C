#include <stdio.h>

int main()
{
    /*
    ============================================================
                    3 BOYUTLU DÝZÝLER
    ============================================================

    3 boyutlu diziler, verileri 3 farklý boyutta saklamak için kullanýlýr.

    Genel yapý: veri_tipi dizi[boyut1][boyut2][boyut3];

    Örneðin: int sayilar[2][3][4];

    Burada:
        2 -> birinci boyut
        3 -> ikinci boyut
        4 -> üçüncü boyut

    Toplam eleman sayýsý: 2 x 3 x 4 = 24


    2 boyutlu dizide: dizi[satýr][sütun]

    3 boyutlu dizide: dizi[katman][satýr][sütun]

    þeklinde düþünebiliriz.
    */


    /*
    ============================================================
                    1. 3 BOYUTLU DÝZÝ TANIMLAMA
    ============================================================
    */

    int sayilar[2][3][4];

	// Bu diziyi þöyle düþünebiliriz: 2 tane katman var.Her katmanda: 3 satýr, 4 sütun
    


    /*
    ============================================================
                    2. DEÐERLERLE TANIMLAMA
    ============================================================
    */

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
    Burada:

        2 katman
        2 satýr
        3 sütun

    vardýr.

    Toplam: 2 x 2 x 3 = 12 eleman bulunur.
    
    
    
    Elemanlar:
    
    1.katman
    -----------------------------------------------------------
    |           |    1.sütun    |    2.sütun    |    3.sütun
    -----------------------------------------------------------
    1.satýr     |       1       |       2       |      3
    -----------------------------------------------------------
    2.satýr     |       4       |       5       |      6 
    -----------------------------------------------------------  
	  
    2.katman
    -----------------------------------------------------------
    |           |    1.sütun    |    2.sütun    |    3.sütun
    -----------------------------------------------------------
    1.satýr     |       7       |       9       |      9
    -----------------------------------------------------------
    2.satýr     |       10       |       11       |      12 
    -----------------------------------------------------------
    
    
    */


    /*
    ============================================================
                    3. ELEMANLARA ERÝÞME
    ============================================================

    3 boyutlu dizilerde 3 index kullanýlýr: dizi[katman][satýr][sütun]
    */


    printf("matris[0][0][0] = %d\n", matris[0][0][0]);
    printf("matris[0][1][2] = %d\n", matris[0][1][2]);

    printf("matris[1][0][0] = %d\n", matris[1][0][0]);
    printf("matris[1][1][2] = %d\n", matris[1][1][2]);


    /*
    Örneðin: matris[1][1][2] demek:
        2. katman
        2. satýr
        3. sütun
    demektir.

    Deðeri: 12
    */


    /*
    ============================================================
                    4. TÜM ELEMANLARI YAZDIRMA
    ============================================================

    3 boyutlu dizinin tamamýný dolaþmak için 3 tane iç içe döngü kullanýlýr.

        1. döngü -> Katman
        2. döngü -> Satýr
        3. döngü -> Sütun
    */

    printf("\nTum elemanlar:\n");

	int i,j,k;
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


    /*
    ============================================================
                    5. KULLANICIDAN DEÐER ALMA
    ============================================================

    3 boyutlu dizinin elemanlarýný scanf() ile
    kullanýcýdan alabiliriz.

    Burada yine 3 tane iç içe döngü kullanýyoruz.
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


    /*
    ============================================================
                    6. GÝRÝLEN DEÐERLERÝ YAZDIRMA
    ============================================================
    */

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


    /*
    ============================================================
                    7. 3 BOYUTLU DÝZÝDE TOPLAMA
    ============================================================
    */

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


    // Dizideki bütün elemanlarý dolaþýyoruz.
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


    /*
    Hesaplama:

        1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36
    */


    /*
    ============================================================
                    8. sizeof ÝLE ELEMAN SAYISI
    ============================================================

    3 boyutlu dizinin toplam eleman sayýsýný:  sizeof(dizi) / sizeof(dizi[0][0][0]) þeklinde bulabiliriz.
    */

    int veri[2][3][4];

    int elemanSayisi =
        sizeof(veri) / sizeof(veri[0][0][0]);

    printf("Toplam eleman sayisi: %d\n", elemanSayisi);


    /*
    Sonuç: 2 x 3 x 4 = 24
        Toplam eleman sayisi: 24
    */


    /*
    ============================================================
                         ÖZET
    ============================================================

    1 boyutlu: int dizi[5];
        dizi[index]


    2 boyutlu: int dizi[3][4];
        dizi[satýr][sütun]


    3 boyutlu: int dizi[2][3][4];
        dizi[katman][satýr][sütun]


    3 boyutlu dizilerde genellikle:

        for -> katman
            for -> satýr
                for -> sütun

    þeklinde 3 iç içe döngü kullanýlýr.


    Örnek:

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    printf("%d", dizi[i][j][k]);
                }
            }
        }
    */

}
