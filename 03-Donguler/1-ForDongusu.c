#include <stdio.h>

main()
{
    /*
    ============================================================
                        FOR DÖNGÜSÜ
    ============================================================

    Bir iþlemi belirli bir þart saðlandýðý sürece tekrar tekrar çalýþtýrmak için döngüler kullanýlýr.

    Genel yapý:

        for (baþlangýç; koþul; deðiþim)
        {
            // Tekrarlanacak kodlar
        }

    Örneðin:
		int i;
        for (i = 0; i < 5; i++)

    Burada:

        i = 0 -> Baþlangýç deðeri
        i < 5 -> Döngünün devam etme þartý
        i++   -> Her tur sonunda i'yi 1 artýrýr. i += 1 veya i = i + 1 ile ayný iþlevdedir. 

    Çalýþma sýrasý:
        1. Baþlangýç
        2. Koþul kontrolü
        3. Döngü gövdesi
        4. Deðiþim
        5. Tekrar koþul kontrolü
    */

    int i;

    // 0'dan 4'e kadar sayýlarý yazdýrýr.
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

    i = 0 ->  0 < 5  ->  çalýþýr
    i = 1 ->  1 < 5  ->  çalýþýr
    i = 2 ->  2 < 5  ->  çalýþýr
    i = 3 ->  3 < 5  ->  çalýþýr
    i = 4 ->  4 < 5  ->  çalýþýr
    i = 5 ->  5 < 5  ->  false -> döngü biter
    */

    // 1'den 10'a kadar sayýlarý yazdýrýr.
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");


    // 10'dan 1'e doðru geri sayar.
    // i-- -> i deðerini 1 azaltýr. i -= 1 veya i = i - 1 ile ayný iþlevdedir. 
    for (i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");


    // 2'þer 2'þer artýrýr.
    // i += 2 -> i deðerine her turda 2 ekler.
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

    // 1'den 5'e kadar sayýlarýn toplamýný bulur.
    int toplam = 0;

    for (i = 1; i <= 5; i++)
    {
        toplam += i; // toplam = toplam + i;
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
    Dýþ döngünün her turunda iç döngü baþtan sona çalýþýr.

    i = 1 -> j = 1, 2, 3
    i = 2 -> j = 1, 2, 3
    i = 3 -> j = 1, 2, 3
    */


    /*
    ============================================================
                            break
    ============================================================

    break bulunduðu döngüyü tamamen sonlandýrýr.

    break çalýþtýðý anda döngünün koþulunun tekrar kontrol edilmesini beklemeden döngüden çýkýlýr.
    */

    for (i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            break;
        }

        printf("%d ", i);
    }

    printf("\n");

    /*
    ÇIKTI: 1 2 3 

    i = 4 olduðunda break çalýþýr ve döngü tamamen sona erer.
    */


    /*
    ============================================================
                          continue
    ============================================================

    continue, o turdaki kalan kodlarý atlar ve bir sonraki iterasyona geçer.

    for döngüsünde continue çalýþtýðýnda deðiþim kýsmý (örneðin i++) yine çalýþýr.
    */

    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n");

    /*
    ÇIKTI: 1 2 4 5

    i = 3 olduðunda continue çalýþýr.

    printf çalýþtýrýlmaz. Sonra for döngüsündeki i++ çalýþýr. i = 4 olur ve döngü devam eder.
    */
}
