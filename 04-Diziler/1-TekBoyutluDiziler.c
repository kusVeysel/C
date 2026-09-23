#include <stdio.h>

main()
{
    /*
    ============================================================
                            DÝZÝLER
    ============================================================

    Dizi (array), ayný veri tipindeki birden fazla deðeri tek bir deðiþken adý altýnda saklamamýzý saðlar.

    Örneðin:

        int ogrenci1 = 101;
        int ogrenci2 = 102;
        int ogrenci3 = 103;

    yerine: int ogrenciNo[3] = {101, 102, 103};
    	kullanabiliriz.

    C'de dizilerin indeksleri 0'dan baþlar.
    */


    /*
    ============================================================
                    1. DÝZÝ TANIMLAMA
    ============================================================

    Genel yapý: veri_tipi dizi_adi[eleman_sayisi];
    */

    int sayilar[5];


    /*
    ============================================================
                    2. DÝZÝYE DEÐER ATAMA
    ============================================================

    5 elemanlý dizinin indeksleri:

        0 -> 1. eleman
        1 -> 2. eleman
        2 -> 3. eleman
        3 -> 4. eleman
        4 -> 5. eleman
    */

    sayilar[0] = 10;
    sayilar[1] = 20;
    sayilar[2] = 30;
    sayilar[3] = 40;
    sayilar[4] = 50;


    /*
    ============================================================
                    3. DÝZÝ ELEMANINA ERÝÞME
    ============================================================
    */

    printf("Ilk eleman: %d\n", sayilar[0]);
    printf("Ikinci eleman: %d\n", sayilar[1]);
    printf("Ucuncu eleman: %d\n", sayilar[2]);
    printf("Dorduncu eleman: %d\n", sayilar[3]);
    printf("Besinci eleman: %d\n", sayilar[4]);


    /*
    ============================================================
                    4. DÝZÝYÝ BAÞLANGIÇTA DOLDURMA
    ============================================================
    */

    int notlar[5] = {70, 80, 90, 85, 95};

    printf("\nNotlar:\n");

    printf("%d\n", notlar[0]);
    printf("%d\n", notlar[1]);
    printf("%d\n", notlar[2]);
    printf("%d\n", notlar[3]);
    printf("%d\n", notlar[4]);


    /*
    ============================================================
                    5. BOYUTU BELÝRTMEME
    ============================================================

    C, verdiðimiz deðerlerin sayýsýna göre dizinin boyutunu belirleyebilir.
    */

    int puanlar[] = {50, 60, 70, 80, 90};

    printf("\nPuanlar:\n");
    printf("%d\n", puanlar[0]);
    printf("%d\n", puanlar[4]);


    /*
    ============================================================
                    6. DÝZÝ VE FOR DÖNGÜSÜ
    ============================================================

    Dizinin elemanlarýný döngü ile tek tek okuyabiliriz.
    */

    int sayilar2[] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", sayilar2[i]);
    }

    /*
    i = 0 -> sayilar2[0]
    i = 1 -> sayilar2[1]
    i = 2 -> sayilar2[2]
    i = 3 -> sayilar2[3]
    i = 4 -> sayilar2[4]
    */


    /*
    ============================================================
                    7. DÝZÝDEKÝ DEÐERÝ DEÐÝÞTÝRME
    ============================================================
    */

    int yaslar[3] = {18, 20, 25};

    // 2. elemanýn indeksi 1'dir.
    yaslar[1] = 21;

    printf("\nYaslar:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", yaslar[i]);
    }


    /*
    ============================================================
                    8. KULLANICIDAN DÝZÝ DOLDURMA
    ============================================================
    */

    int sayilar3[5];

    printf("\n5 adet sayi giriniz:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &sayilar3[i]);
    }

    printf("\nGirilen sayilar:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", sayilar3[i]);
    }

    printf("\n");


    /*
    ============================================================
                    9. DÝZÝ ELEMANLARININ TOPLAMI
    ============================================================
    */

    int toplam = 0;
    int sayilar4[5] = {10, 20, 30, 40, 50};

    for (i = 0; i < 5; i++)
    {
        toplam += sayilar4[i];
    }

    printf("\nDizinin toplami: %d\n", toplam);


    /*
    ============================================================
                    10. DÝZÝ ELEMANLARININ ORTALAMASI
    ============================================================
    */

    int notlar2[5] = {70, 80, 90, 60, 100};
    int toplamNot = 0;

    for (i = 0; i < 5; i++)
    {
        toplamNot += notlar2[i];
    }

    // (float) -> tür dönüþümü
    // Böylece ondalýklý bölme yapýlýr.
    float ortalama = (float)toplamNot / 5;

    printf("Not ortalamasi: %.2f\n", ortalama);


    /*
    ============================================================
                    11. DÝZÝDE EN BÜYÜK DEÐER
    ============================================================
    */

    int sayilar5[5] = {25, 10, 80, 45, 60};

    int enBuyuk = sayilar5[0];

    for (i = 1; i < 5; i++)
    {
        if (sayilar5[i] > enBuyuk)
        {
            enBuyuk = sayilar5[i];
        }
    }

    printf("En buyuk sayi: %d\n", enBuyuk);


    /*
    ============================================================
                    12. DÝZÝDE EN KÜÇÜK DEÐER
    ============================================================
    */

    int sayilar6[5] = {25, 10, 80, 45, 60};

    int enKucuk = sayilar6[0];

    for (i = 1; i < 5; i++)
    {
        if (sayilar6[i] < enKucuk)
        {
            enKucuk = sayilar6[i];
        }
    }

    printf("En kucuk sayi: %d\n", enKucuk);


    /*
    ============================================================
                    13. DÝZÝ BOYUTU - sizeof
    ============================================================

    sizeof() bellekte kaplanan byte miktarýný verir.

    Örneðin: int sayilar[5];

    Dizinin toplam boyutu: sizeof(sayilar)

    Bir elemanýn boyutu: sizeof(sayilar[0])

    Eleman sayýsý: sizeof(sayilar) / sizeof(sayilar[0])
    */

    int sayilar7[] = {10, 20, 30, 40, 50};

    int elemanSayisi = sizeof(sayilar7) / sizeof(sayilar7[0]);

    printf("\nDizinin eleman sayisi: %d\n", elemanSayisi);

    // int'in kaç byte olduðunu sistemden öðrenebiliriz.
    printf("int boyutu: %zu byte\n", sizeof(int));


    /*
    ============================================================
                    14. CHAR DÝZÝSÝNE GÝRÝÞ
    ============================================================

    char dizileri karakterleri saklayabilir.

    Her eleman ayrý bir char deðeridir.
    */

    char harfler[5] = {'A', 'B', 'C', 'D', 'E'};

    printf("\nHarfler:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%c ", harfler[i]);
    }

    printf("\n");


    /*
    ============================================================
                         ÖNEMLÝ NOT
    ============================================================

    int sayilar[5] için geçerli indeksler:

        0
        1
        2
        3
        4

    sayilar[4] -> DOÐRU
    sayilar[5] -> HATALI

    Dizinin sýnýrlarý dýþýna çýkmak beklenmeyen sonuçlara ve ciddi hatalara neden olabilir.

    DÝKKAT: int sayilar[5];
    	ifadesindeki 5, eleman sayýsýný belirtir.

    En son indeks ise: 5 - 1 = 4 olur.
    */
}
