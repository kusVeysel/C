# C Programlama Öğrenme Deposu

Bu depo, C programlama dilini temel seviyeden başlayarak adım adım öğrenmek, örnek kodlar yazmak ve öğrendiklerini küçük projelerle pekiştirmek için hazırlanmıştır.

## 📚 İçindekiler

- [Amaç](#-amaç)
- [Klasör Yapısı](#-klasör-yapısı)
- [Önerilen Öğrenme Sırası](#-önerilen-öğrenme-sırası)
- [Çalışma Önerileri](#-çalışma-önerileri)

## 🎯 Amaç

- C dilinin temel sözdizimini öğrenmek.
- Koşullar, döngüler, diziler ve fonksiyonlar gibi temel yapıların mantığını kavramak.
- Pointer, bellek yönetimi ve dosya işlemleri gibi daha ileri konulara geçmek.
- Matematiksel işlemler ve veri yapıları üzerinde pratik yapmak.
- Öğrenilen konuları küçük uygulama ve projelerde kullanmak.

## 📁 Klasör Yapısı

| Klasör | Açıklama |
|---|---|
| `01-TemelKavramlar` | Programın temel yapısı, `main()`, değişkenler, veri tipleri, sabitler, operatörler ve temel giriş/çıkış işlemleri (`printf`, `scanf`). |
| `02-KararYapilari` | Koşullu işlemler: `if`, `if-else`, `else if`, `switch-case` ve üçlü koşul operatörü (`?:`). |
| `03-Donguler` | Tekrarlanan işlemler: `for`, `while` ve `do-while` döngüleri; sayaçlar ve döngü kontrolü. |
| `04-Diziler` | Aynı türden birden fazla veriyi saklama; tek boyutlu, iki boyutlu ve üç boyutlu diziler. |
| `05-Fonksiyonlar` | Fonksiyon tanımlama ve çağırma, parametreler, geri dönüş değerleri, kapsam ve adres üzerinden değer değiştirme gibi konular. |
| `06-MathKutuphane` | Matematiksel işlemler için standart C matematik kütüphanesi (`math.h`) ve fonksiyonları. |
| `07-KutuphaneOlusturma` | Kodları yeniden kullanılabilir hâle getirmek için kendi başlık (`.h`) ve kaynak (`.c`) dosyalarını oluşturma ve kullanma. |
| `08-Pointerler` | Bellek adresleri, pointer tanımlama, `&` ve `*` operatörleri, dizilerle pointer ilişkisi ve fonksiyonlara adres gönderme. |
| `09-Stringler` | C dilinde karakter dizileri; metin tanımlama, metin okuma/yazma ve `string.h` ile `ctype.h` fonksiyonları. |
| `10-GelismisVeriYapilari` | `struct`, `union`, `enum`, `typedef` ve birden fazla veriyi birlikte temsil etme gibi veri yapıları konuları. |
| `11-DinamikBellekYonetimi` | Çalışma sırasında bellek ayırma ve serbest bırakma: `malloc`, `calloc`, `realloc` ve `free`. |
| `12-DosyaIslemleri` | Dosya açma, okuma, yazma ve kapatma; `FILE`, `fopen`, `fprintf`, `fscanf`, `fgets` ve `fclose`. |
| `Banka` | Banka işlemlerini modelleyen uygulama veya alıştırmalar. |
| `Firin` | Fırın işlemlerini modelleyen uygulama veya alıştırmalar. |
| `Fistiklik` | Bu klasördeki uygulama veya alıştırmalar için proje alanı. |
| `Kitapci` | Kitapçı işlemlerini modelleyen uygulama veya alıştırmalar. |
| `Proje` | Birden fazla konuyu bir araya getiren bağımsız proje çalışmaları. |

> Not: `Banka`, `Firin`, `Fistiklik`, `Kitapci` ve `Proje` klasörlerinin açıklamaları isimlerinden hareketle genel olarak yazılmıştır. İçeriklerine göre bu açıklamaları daha sonra özelleştirebilirsin.

## 🧭 Önerilen Öğrenme Sırası

Konu klasörlerini mümkün olduğunca sırayla çalış:

1. **Temel kavramlar:** Değişkenler, veri tipleri, operatörler ve giriş/çıkış.
2. **Karar yapıları:** Programın koşullara göre farklı işlemler yapması.
3. **Döngüler:** İşlemleri belirli sayıda veya bir koşul sağlandığı sürece tekrarlama.
4. **Diziler ve stringler:** Birden fazla değeri ve metinleri işleme.
5. **Fonksiyonlar:** Programı küçük, anlaşılır ve tekrar kullanılabilir parçalara ayırma.
6. **Matematik kütüphanesi ve kütüphane oluşturma:** Hazır fonksiyonlardan yararlanma ve kodu dosyalara ayırma.
7. **Pointerler:** Bellek adresleriyle çalışma ve adres üzerinden verilere erişme.
8. **Gelişmiş veri yapıları:** İlişkili verileri `struct` gibi yapılarla bir arada tutma.
9. **Dinamik bellek yönetimi:** Gereksinime göre bellek ayırma ve geri bırakma.
10. **Dosya işlemleri:** Verileri program kapandıktan sonra da saklayabilme.
11. **Uygulama projeleri:** Öğrendiklerini `Banka`, `Firin`, `Fistiklik`, `Kitapci` ve `Proje` klasörlerindeki çalışmalarda kullanma.

Klasör numaraları mevcut dizin düzenini yansıtır; bu nedenle kendi çalışma sıralamana göre düzenleme yapabilirsin.

## ✅ Çalışma Önerileri

- Her örneği yalnızca çalıştırmakla kalma; kodun ne yaptığını anlamaya çalış.
- Değişken değerlerini ve koşulları değiştirerek sonucu gözlemle.
- Hata mesajlarını dikkatlice oku ve hatanın hangi satırda oluştuğunu kontrol et.
- Her konu için kendi başına birkaç küçük alıştırma yap.
- Pointer ve dinamik bellek konularında adreslerin ve bellek kullanımının mantığını özellikle takip et.
- Projelerde kullanıcı girdilerini doğrula; dosya açma ve bellek ayırma işlemlerinin başarısız olabileceğini hesaba kat.
- Öğrendiğin konuları daha önceki konularla birleştirerek küçük uygulamalar geliştir.

---

**Not:** Bu depo bir öğrenme ve pratik alanıdır. Klasörlerdeki örnekler geliştikçe bu README dosyasını da güncelleyebilirsin.

---

**Veysel KUŞ**
