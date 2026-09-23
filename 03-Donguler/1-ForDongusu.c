#include <stdio.h>

int main()
{
    /*
    ============================================================
                        FOR DÖNGÜSÜ
    ============================================================

    Bir iþlemi belirli bir þart saðlandýðý sürece tekrar tekrar çalýþtýrmak için döngüler kullanýlýr.

    for döngüsünün genel yapýsý:

        for (baþlangýç; koþul; deðiþim)
        {
            // Tekrarlanacak kodlar
        }

    Örneðin:

        for (int i = 0; i < 5; i++)

    Burada:

        int i = 0 -> Döngünün baþlangýç deðeri

        i < 5 -> Döngünün devam etme þartý

        i++ -> Her turdan sonra i deðerini 1 artýr
    */


    // 0'dan 4'e kadar sayýlarý yazdýrýr.
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }


    /*
    ÇIKTI:

    0
    1
    2
    3
    4

    i = 0  ->  0 < 5  -> çalýþýr
    i = 1  ->  1 < 5  -> çalýþýr
    i = 2  ->  2 < 5  -> çalýþýr
    i = 3  ->  3 < 5  -> çalýþýr
    i = 4  ->  4 < 5  -> çalýþýr
    i = 5  ->  5 < 5  -> FALSE -> döngü biter
    */


    // 1'den 10'a kadar sayýlarý yazdýrma
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");


    // 10'dan 1'e doðru geri sayma
    // i-- -> i deðerini 1 azaltýr.
    for (i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");


    // 2'þer 2'þer artýrma
    // i += 2 -> her turda i deðerine 2 ekler.
    for (i = 0; i <= 10; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");


    /*
    ============================================================
                    FOR ÝÇERÝSÝNDE HESAPLAMA
    ============================================================
    */

    // 1'den 5'e kadar sayýlarýn toplamýný buluyoruz.

    int toplam = 0;
    for (i = 1; i <= 5; i++)
    {
        toplam += i;
    }
    printf("Toplam: %d\n", toplam);

    /*
    Hesaplama:

    toplam = 0

    i = 1 -> toplam = 1
    i = 2 -> toplam = 3
    i = 3 -> toplam = 6
    i = 4 -> toplam = 10
    i = 5 -> toplam = 15

    Sonuç: 15
    */


    /*
    ============================================================
                        ÝÇ ÝÇE FOR
    ============================================================

    Bir for döngüsünün içerisinde baþka bir for döngüsü kullanýlabilir.

    Buna nested loop (iç içe döngü) denir.
    */
	int j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("i=%d j=%d\n", i, j);
        }
    }


    /*
    ============================================================
                        break
    ============================================================

    break döngüyü tamamen sonlandýrýr.

    Þart saðlanmasa bile break çalýþtýðý anda döngüden çýkýlýr.
    */

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d ", i);
    }

    printf("\n");


    /*
    ÇIKTI: 1 2 3 4

    i = 5 olduðunda break çalýþýr ve döngü tamamen biter.
    */


    /*
    ============================================================
                        continue
    ============================================================

    continue o turdaki iþlemi atlar ve döngünün bir sonraki turuna geçer. Döngüyü 1 kereye mahsus kýrar.
    */

    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d ", i);
    }

    /*
    ÇIKTI: 1 2 4 5

    i = 3 olduðunda continue çalýþýr. 3 yazdýrýlmaz ve sonraki tura geçilir.
    */

}
