#include <stdio.h>

/*
================================================================================
                    REKÜRSÝF (ÖZYÝNELEMELÝ) FONKSÝYONLAR
================================================================================

1. TANIM: Rekürsif fonksiyon, kendi kendini çaðýran fonksiyondur.

2. TEMEL MANTIK VE ÝKÝ ALTIN KURAL: Bir rekürsif fonksiyonun doðru çalýþabilmesi için 2 temel bileþen ÞARTTIR:
   
   a) Durma Koþulu (Base Case):
      Fonksiyonun sonsuz döngüye girmesini önleyen ve zinciri sonlandýran koþul.
      Bu koþul olmazsa bellek taþmasý (Stack Overflow) hatasý alýnýr.
      
   b) Rekürsif Adým (Recursive Step):
      Fonksiyonun, problemi daha küçük alt problemlere bölerek kendi kendini tekrar çaðýrdýðý kýsýmdýr.

3. BELLEK ÇALIÞMA MANTIÐI (STACK - YIÐIT):
   - Her fonksiyon çaðrýsýnda belleðin Stack bölgesinde yeni bir çerçeve (frame) açýlýr.
   - Çaðrýlar üst üste birikir (Push).
   - Durma koþuluna ulaþýldýðýnda en üstteki çaðrýdan baþlanarak geriye doðru sonuçlar döndürülür ve bellekten temizlenir (Pop).

4. AVANTAJ & DEZAVANTAJLAR:
   + Avantaj: Aðaç yapýlarý, graflar, böl-ve-yönet (Merge Sort) gibi yapýlarda kodu oldukça kýsa ve okunabilir kýlar.
   - Dezavantaj: Her çaðrý bellek kapladýðý için iteratif (döngülü) çözümlere göre daha fazla hafýza tüketir ve daha yavaþtýr.
================================================================================
*/


// 1. Temel Örnek: Faktöriyel
// n! = n * (n-1)! | Durma koþulu: n <= 1
int faktoriyel(int n) {
    if (n <= 1) {
        return 1; // Durma koþulu (Base Case)
    }
    return n * faktoriyel(n - 1); // Rekürsif adým
}


// 2. Dizilerle Rekürsif Kullaným: Dizi Elemanlarý Toplamý
// Durma koþulu: Eleman kalmadýðýnda (boyut == 0)
int dizi_toplami(int arr[], int boyut) {
    if (boyut <= 0) {
        return 0;
    }
    return arr[boyut - 1] + dizi_toplami(arr, boyut - 1);
}

// 3. Klasik Algoritma Örneði: Hanoi Kuleleri
// Diskleri A'dan C'ye, B'yi kullanarak taþýr
void hanoi(int n, char kaynak, char hedef, char yedek) {
    if (n == 1) {
        printf("Disk 1: %c -> %c\n", kaynak, hedef);
        return;
    }
    hanoi(n - 1, kaynak, yedek, hedef);
    printf("Disk %d: %c -> %c\n", n, kaynak, hedef);
    hanoi(n - 1, yedek, hedef, kaynak);
}

main() {
    // 1. Faktöriyel Testi
    int sayi = 5;
    printf("--- 1. FAKTORIYEL ---\n");
    printf("%d! = %d\n\n", sayi, faktoriyel(sayi));

 // 2. Dizi Toplamý Testi
    int dizi[] = {10, 20, 30, 40, 50};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    printf("--- 3. DIZI TOPLAMI ---\n");
    printf("Dizi elemanlari toplami: %d\n\n", dizi_toplami(dizi, boyut));

    // 3. Hanoi Kuleleri Testi (3 Disk Ýçin)
    printf("--- 4. HANOI KULELERI (3 Disk) ---\n");
    hanoi(3, 'A', 'C', 'B');

}
