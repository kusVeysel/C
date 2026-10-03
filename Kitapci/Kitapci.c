#include <stdio.h>

main() {
	
    int bilimAlim, sanatAlim, dersAlim, romanAlim, testAlim;
    
    int bilimMaliyet, sanatMaliyet, dersMaliyet, romanMaliyet, testMaliyet;
    
    int bilimSatis, sanatSatis, dersSatis, romanSatis, testSatis;
    
    int bilimGelir, sanatGelir, dersGelir, romanGelir, testGelir;
    
    int aylikToplamMaliyet, aylikToplamGelir, aylikNetSonuc;
    int yillikToplamNet = 0;
    int ay;

    for (ay = 1; ay <= 12; ay++) {
    	
        // --- BÝLÝM KÝTABI ALIMI ---
        printf("%d. ay alinacak bilim kitabi sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &bilimAlim);
            if (bilimAlim >= 10 && bilimAlim <= 50)
                break;
            printf("Hata! Bilim kitaplari 10 ile 50 adet arasinda alinabilir. Tekrar giriniz: ");
        }
        bilimMaliyet = bilimAlim * 100;
        printf("%d. ay bilim kitabi maliyeti: %d adet = %d TL\n\n", ay, bilimAlim, bilimMaliyet);

        // --- SANAT KÝTABI ALIMI ---
        printf("%d. ay alinacak sanat kitabi sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &sanatAlim);
            if (sanatAlim >= 10 && sanatAlim <= 100)
                break;
            printf("Hata! Sanat kitaplari 10 ile 100 adet arasinda alinabilir. Tekrar giriniz: ");
        }
        sanatMaliyet = sanatAlim * 250;
        printf("%d. ay sanat kitabi maliyeti: %d adet = %d TL\n\n", ay, sanatAlim, sanatMaliyet);

        // --- DERS KÝTABI ALIMI ---
        printf("%d. ay alinacak ders kitabi sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &dersAlim);
            if (dersAlim >= 30 && dersAlim <= 200)
                break;
            printf("Hata! Ders kitaplari 30 ile 200 adet arasinda alinabilir. Tekrar giriniz: ");
        }
        dersMaliyet = dersAlim * 80;
        printf("%d. ay ders kitabi maliyeti: %d adet = %d TL\n\n", ay, dersAlim, dersMaliyet);

        // --- ROMAN ALIMI ---
        printf("%d. ay alinacak roman sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &romanAlim);
            if (romanAlim >= 30 && romanAlim <= 200)
                break;
            printf("Hata! Roman kitaplari 30 ile 200 adet arasinda alinabilir. Tekrar giriniz: ");
        }
        romanMaliyet = romanAlim * 50;
        printf("%d. ay roman maliyeti: %d adet = %d TL\n\n", ay, romanAlim, romanMaliyet);

        // --- TEST KÝTABI ALIMI ---
        printf("%d. ay alinacak test kitabi sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &testAlim);
            if (testAlim >= 30 && testAlim <= 200)
                break;
            printf("Hata! Test kitaplari 30 ile 200 adet arasinda alinabilir. Tekrar giriniz: ");
        }
        testMaliyet = testAlim * 100;
        printf("%d. ay test kitabi maliyeti: %d adet = %d TL\n\n", ay, testAlim, testMaliyet);

        // Toplam Maliyet Hesaplama
        aylikToplamMaliyet = bilimMaliyet + sanatMaliyet + dersMaliyet + romanMaliyet + testMaliyet;
        printf("--- %d. Ay Toplam Kitap Maliyeti = %d TL ---\n\n", ay, aylikToplamMaliyet);

        // --- BÝLÝM KÝTABI SATIÞI ---
        printf("%d. ay satilan bilim kitabi sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &bilimSatis);
            if (bilimSatis <= bilimAlim)
                break;
            printf("Hata! Satilan miktar alinan miktardan (%d) fazla olamaz. Tekrar giriniz: ", bilimAlim);
        }
        bilimGelir = bilimSatis * 200;
        printf("%d. ay bilim kitabi satisi: %d adet = %d TL\n\n", ay, bilimSatis, bilimGelir);

        // --- SANAT KÝTABI SATIÞI ---
        printf("%d. ay satilan sanat kitabi sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &sanatSatis);
            if (sanatSatis <= sanatAlim)
                break;
            printf("Hata! Satilan miktar alinan miktardan (%d) fazla olamaz. Tekrar giriniz: ", sanatAlim);
        }
        sanatGelir = sanatSatis * 350;
        printf("%d. ay sanat kitabi satisi: %d adet = %d TL\n\n", ay, sanatSatis, sanatGelir);

        // --- DERS KÝTABI SATIÞI ---
        printf("%d. ay satilan ders kitabi sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &dersSatis);
            if (dersSatis <= dersAlim)
                break;
            printf("Hata! Satilan miktar alinan miktardan (%d) fazla olamaz. Tekrar giriniz: ", dersAlim);
        }
        dersGelir = dersSatis * 100;
        printf("%d. ay ders kitabi satisi: %d adet = %d TL\n\n", ay, dersSatis, dersGelir);

        // --- ROMAN SATIÞI ---
        printf("%d. ay satilan roman sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &romanSatis);
            if (romanSatis <= romanAlim)
                break;
            printf("Hata! Satilan miktar alinan miktardan (%d) fazla olamaz. Tekrar giriniz: ", romanAlim);
        }
        romanGelir = romanSatis * 80;
        printf("%d. ay roman satisi: %d adet = %d TL\n\n", ay, romanSatis, romanGelir);

        // --- TEST KÝTABI SATIÞI ---
        printf("%d. ay satilan test kitabi sayisini giriniz: ", ay);
        while (1) {
            scanf("%d", &testSatis);
            if (testSatis <= testAlim)
                break;
            printf("Hata! Satilan miktar alinan miktardan (%d) fazla olamaz. Tekrar giriniz: ", testAlim);
        }
        testGelir = testSatis * 150;
        printf("%d. ay test kitabi satisi: %d adet = %d TL\n\n", ay, testSatis, testGelir);

        // Toplam Gelir ve Net Durum Hesaplama
        aylikToplamGelir = bilimGelir + sanatGelir + dersGelir + romanGelir + testGelir;
        printf("--- %d. Ay Toplam Satis Geliri = %d TL ---\n", ay, aylikToplamGelir);

        aylikNetSonuc = aylikToplamGelir - aylikToplamMaliyet;
        
        if (aylikNetSonuc > 0) {
            printf("%d. ay Kar Durumunuz: %d TL\n\n", ay, aylikNetSonuc);
        } else if (aylikNetSonuc < 0) {
            printf("%d. ay Zarar Durumunuz: %d TL\n\n", ay, -aylikNetSonuc);
        } else {
            printf("%d. ay Ne kar ne zarar edildi (0 TL)\n\n", ay);
        }

        yillikToplamNet += aylikNetSonuc;
    }

    // --- YILLIK ÖZET ---
    printf("=========================================\n");
    printf("1 Yillik Net Kar/Zarar Durumunuz: ");
    if (yillikToplamNet > 0) {
        printf("%d TL Kar\n", yillikToplamNet);
    } else if (yillikToplamNet < 0) {
        printf("%d TL Zarar\n", -yillikToplamNet);
    } else {
        printf("0 TL (Basa bas - Kar/Zarar yok)\n");
    }
    printf("=========================================\n");

}

