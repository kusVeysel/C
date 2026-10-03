#include <stdio.h>

main() {
	
    int donum, toplamAgacSayisi;
    int gencYuzde, ortaYuzde, buyukYuzde, toplamYuzde;
    int gencAgacAdet, ortaAgacAdet, buyukAgacAdet;
    int gencMaliyet, ortaMaliyet, buyukMaliyet, toplamMaliyet;
    int ortaGelir, buyukGelir, toplamGelir;
    int netKar, fistiklikBedeli;

    // --- DÖNÜM VE AÐAÇ SAYSISI ---
    printf("Fistikligin kac donum oldugunu giriniz: ");
    scanf("%d", &donum);
    
    toplamAgacSayisi = donum * 30;
    printf("Fistiklikta toplamda %d tane agac bulunmaktadir.\n\n", toplamAgacSayisi);

    // --- YÜZDE GÝRÝÞLERÝ VE DOÐRULAMA ---
    while (1) {
        // Genç Aðaç Yüzdesi (%10 - %30)
        while (1) {
            printf("%% kacinin genc agac oldugunu giriniz (10-30): ");
            scanf("%d", &gencYuzde);
            if (gencYuzde >= 10 && gencYuzde <= 30)
                break;
            printf("Hatali giris! Genc agaclar %%10 ile %%30 arasinda olmalidir.\n\n");
        }

        // Orta Aðaç Yüzdesi (%20 - %50)
        while (1) {
            printf("%% kacinin orta agac oldugunu giriniz (20-50): ");
            scanf("%d", &ortaYuzde);
            if (ortaYuzde >= 20 && ortaYuzde <= 50)
                break;
            printf("Hatali giris! Orta agaclar %%20 ile %%50 arasinda olmalidir.\n\n");
        }

        // Büyük Aðaç Yüzdesi (%20 - %40)
        while (1) {
            printf("%% kacinin buyuk agac oldugunu giriniz (20-40): ");
            scanf("%d", &buyukYuzde);
            if (buyukYuzde >= 20 && buyukYuzde <= 40)
                break;
            printf("Hatali giris! Buyuk agaclar %%20 ile %%40 arasinda olmalidir.\n\n");
        }

        // Toplam Yüzde Kontrolü (%100)
        toplamYuzde = gencYuzde + ortaYuzde + buyukYuzde;
        if (toplamYuzde == 100)
            break;

        printf("Hatali giris! Yuzdelerin toplami %%100 olmalidir (Girilen toplam: %%%d). Bastan giriniz.\n\n", toplamYuzde);
    }

    // --- AÐAÇ ADETLERÝ HESAPLAMA ---
    gencAgacAdet = toplamAgacSayisi * gencYuzde / 100;
    ortaAgacAdet = toplamAgacSayisi * ortaYuzde / 100;
    buyukAgacAdet = toplamAgacSayisi * buyukYuzde / 100;

    printf("\n--- AGAC ADETLERI ---\n");
    printf("Genc Agac Sayisi  : %d adet\n", gencAgacAdet);
    printf("Orta Agac Sayisi  : %d adet\n", ortaAgacAdet);
    printf("Buyuk Agac Sayisi : %d adet\n\n", buyukAgacAdet);

    // --- MALÝYET HESAPLAMA ---
    gencMaliyet = gencAgacAdet * 500;
    ortaMaliyet = ortaAgacAdet * 2000;
    buyukMaliyet = buyukAgacAdet * 2500;
    toplamMaliyet = gencMaliyet + ortaMaliyet + buyukMaliyet;

    printf("--- AGAC MALÝYETLERÝ ---\n");
    printf("Genc Agac Maliyeti  : %d TL\n", gencMaliyet);
    printf("Orta Agac Maliyeti  : %d TL\n", ortaMaliyet);
    printf("Buyuk Agac Maliyeti : %d TL\n", buyukMaliyet);
    printf("Toplam Masraf       : %d TL\n\n", toplamMaliyet);

    // --- GELÝR HESAPLAMA ---
    ortaGelir = (ortaAgacAdet * 20) * 300;   // Aðaç baþý 20 kg * 300 TL
    buyukGelir = (buyukAgacAdet * 30) * 300; // Aðaç baþý 30 kg * 300 TL
    toplamGelir = ortaGelir + buyukGelir;

    printf("--- AGAC GELÝRLERÝ ---\n");
    printf("Genc Agaclar        : Gelir vermemektedir.\n");
    printf("Orta Agaclar Geliri : %d TL\n", ortaGelir);
    printf("Buyuk Agaclar Geliri: %d TL\n", buyukGelir);
    printf("Toplam Gelir        : %d TL\n\n", toplamGelir);

    // --- KAR VE FINANSAL DÜZEY ---
    netKar = toplamGelir - toplamMaliyet;
    fistiklikBedeli = netKar * 10;

    printf("=========================================\n");
    printf("Yillik Net Kar  : %d TL\n", netKar);
    printf("Fistiklik Bedeli: %d TL\n", fistiklikBedeli);
    printf("=========================================\n");

}

