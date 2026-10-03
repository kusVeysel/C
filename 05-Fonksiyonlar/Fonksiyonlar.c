/*
===============================================================================
C DÝLÝNDE FONKSÝYONLAR (FUNCTIONS) REHBERÝ
===============================================================================
Bu dosya:
1. Fonksiyon prototiplerini
2. 4 Ana Fonksiyon Yapisini:
   - Parametresiz & Geri Dönüþsüz
   - Parametresiz & Geri Dönüþlü
   - Parametreli & Geri Dönüþsüz
   - Parametreli & Geri Dönüþlü
anlatmaktadýr.
===============================================================================
*/

#include <stdio.h>

// ============================================================================
// 1. FONKSÝYON PROTOTÝPLERÝ (FUNCTION PROTOTYPES / DECLARATION)
// ============================================================================
/*
  PROTOTÝP NEDÝR? NE ÝÞE YARAR?
  ----------------------------------------------------------------------------
  C dili yukarýdan aþþaðýya (top-down) derlenir. Bir fonksiyon main() fonksiyonunun ALTINDA tanimlanmýþsa, derleyici main() içindeki caðrýyý görünce "Bu fonksiyon nedir?" diyerek hata/uyarý verebilir.

  Prototip, derleyiciye þunu söyler: Ey derleyici! Kodun alt taraflarýnda adý, parametre tipi ve geri dönüþ tipi þu þekilde olan bir fonksiyon var. Çaðrýlarý buna göre kontrol et."

  Yapýsý: Geri_Donus_Tipi  Fonksiyon_Adý(Parametre_Tipleri);
*/

// 1) Parametresiz ve Geri Dönüþsüz
void menuyuGoster(void);

// 2) Parametresiz ve Geri Dönüþlü
int sabitSayiAl(void);

// 3) Parametreli ve Geri Dönüþsüz
void kareYazdir(int sayi);

// 4) Parametreli ve Geri Dönüþlü
int topla(int a, int b);

// 4 fonksiyonun da prototipi alýndý, artýk main fonksiyonundan sonra çaðrýlabilir.


// ============================================================================
// MAÝN FONKSÝYONU
// ============================================================================
main(void) {

    // --- TÝP 1: Parametresiz ve Geri Dönüþsüz ---
    printf("--- 1. Parametresiz ve Geri Donussuz ---\n");
    menuyuGoster(); // Deðer almaz, deðer döndürmez. Sadece iþi yapar.
    printf("\n");

    // --- TIP 2: Parametresiz ve Geri Dönüþlü ---
    printf("--- 2. Parametresiz ve Geri Donuslu ---\n");
    int rastgele = sabitSayiAl(); // Deðer almaz, ama geriye int döndürür.
    printf("Fonksiyondan gelen deger: %d\n\n", rastgele);

    // --- TIP 3: Parametreli ve Geri Dönüþsüz ---
    printf("--- 3. Parametreli ve Geri Donussuz ---\n");
    int sayi = 6;
    kareYazdir(sayi); // 'sayi' parametre olarak gönderilir, geriye deðer dönmez.
    printf("\n");

    // --- TIP 4: Parametreli ve Geri Dönüþlü ---
    printf("--- 4. Parametreli ve Geri Donuslu ---\n");
    int s1 = 12, s2 = 8;
    int sonuc = topla(s1, s2); // s1 ve s2 gönderilir, toplam geriye döndürülür.
    printf("%d + %d = %d", s1, s2, sonuc);

}


// ============================================================================
// 2. FONKSIYON TANIMLARI (FUNCTION DEFINITIONS)
// ============================================================================


/*
  ----------------------------------------------------------------------------
  1. TÝP: PARAMETRESÝZ VE GERÝ DÖNÜÞSÜZ FONKSÝYON
  ----------------------------------------------------------------------------
  - Geri dönüþ tipi: 'void' (Hiçbir þey döndürmez)
  - Parametre: 'void' veya bos (Dýþarýdan veri almaz)
  - Kullaným Amacý: Ekrana menüleri yazdýrma, sabit mesaj gösterme, loglama vb.
*/
void menuyuGoster(void) {
    printf("[MENU]\n");
    printf("1. Isleme Basla\n");
    printf("2. Ayarlar\n");
    printf("3. Cikis\n");
}


/*
  ----------------------------------------------------------------------------
  2. TÝP: PARAMETRESÝZ VE GERÝ DÖNÜÞLÜ FONKSÝYON
  ----------------------------------------------------------------------------
  - Geri dönüþ tipi: 'int', 'float', 'char' vb. (Burada 'int')
  - Parametre: 'void' (Diþaridan parametre almaz)
  - Kullaným Amacý: Kullanýcýdan veri alma, sabit/rastgele bir deðer üretip verme vb.
*/
int sabitSayiAl(void) {
    // Diþaridan bir þey almadan, içeride ürettiði veya aldýðý deðeri döndürür.
    int sabit = 42;
    return sabit; // 'return' ifadesi deðeri caðýran yere gönderir.
}


/*
  ----------------------------------------------------------------------------
  3. TÝP: PARAMETRELÝ VE GERÝ DÖNÜÞSÜZ FONKSÝYON
  ----------------------------------------------------------------------------
  - Geri dönüþ tipi: 'void' (Hiçbir þey döndürmez)
  - Parametre: 'int sayi' (Dýþarýdan bir veri kabul eder)
  - Kullaným Amaci: Veriyi alýp ekrana basma, dosyaya yazma veya iþleme vb.
*/
void kareYazdir(int sayi) {
    int kare = sayi * sayi;
    printf("Gonderilen sayi: %d, Karesi: %d\n", sayi, kare);
}


/*
  ----------------------------------------------------------------------------
  4. TÝP: PARAMETRELÝ VE GERÝ DÖNÜÞLÜ FONKSÝYON
  ----------------------------------------------------------------------------
  - Geri dönüþ tipi: 'int' (Sonuç olarak bir tamsayý döndürür)
  - Parametre: 'int a, int b' (Dýþarýdan iki adet veri alýr)
  - Kullaným Amacý: Matematiksel hesaplamalar, veri dönüþümleri, mantýksal sorgular.
*/
int topla(int a, int b) {
    int toplam = a + b;
    return toplam; // Hesaplanan sonucu ana programa döndürür.
}

