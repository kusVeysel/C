#include <stdio.h>

int main() {
    int ay, un_ton, calisan_sayisi, elektrik_faturasi, su_faturasi, kira_faturasi, toplam_kazanc = 0;

    for (ay = 1; ay <= 12; ay++) {

        // --- GÝRDÝLER ---
        printf("--- %d. AY BILGILERI ---\n", ay);
        printf("Gelen un miktari (ton): ");
        scanf("%d", &un_ton);

        printf("Calisan eleman sayisi: ");
        scanf("%d", &calisan_sayisi);

        printf("Elektrik faturasi (TL): ");
        scanf("%d", &elektrik_faturasi);

        printf("Su faturasi (TL): ");
        scanf("%d", &su_faturasi);

        printf("Kira faturasi (TL): ");
        scanf("%d", &kira_faturasi);

        // --- HESAPLAMALAR ---
        int un_kg = un_ton * 1000;                    // 1 ton = 1000 kg
        int ekmek_adeti = un_kg * 5;                  // 1 kg undan 5 ekmek (200g)
        int ekmek_satis_geliri = ekmek_adeti * 10;    // Ekmek baþý 10 TL gelir
        int un_maliyeti = un_kg * 5;                  // Unun kg maliyeti (5 TL/kg)

        // Diðer Giderler
        int isci_maliyeti = calisan_sayisi * 20000;   // kiþi baþý iþçi ücreti 20.000 TL
        int toplam_gider = un_maliyeti + isci_maliyeti + elektrik_faturasi + su_faturasi + kira_faturasi;

        // Aylýk Kâr / Zarar
        int aylik_kar = ekmek_satis_geliri - toplam_gider;

        // --- AYLIK SONUÇ ---
        if (aylik_kar >= 0) {
            printf("%d. Ay Kaariniz: %d TL\n\n", ay, aylik_kar);
        } else {
            printf("%d. Ay Zarariniz: %d TL\n\n", ay, -aylik_kar);
        }

        toplam_kazanc += aylik_kar;
    }

    // --- GENEL SONUÇ ---
    printf("====================================\n");
    if (toplam_kazanc >= 0) {
        printf("Yil Sonu Toplam Kaariniz: %d TL\n", toplam_kazanc);
    } else {
        printf("Yil Sonu Toplam Karariniz: %d TL\n", -toplam_kazanc);
    }
    printf("====================================\n");

}
