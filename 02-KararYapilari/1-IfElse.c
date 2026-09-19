#include <stdio.h>

int main()
{
    /*
    ============================================================
                    1. KARÞILAÞTIRMA OPERATÖRLERÝ
    ============================================================

    Karar yapýlarýnda bir deðeri baþka bir deðerle karþýlaþtýrýrýz.

    ==   Eþit mi?
    !=   Eþit deðil mi?
    >    Büyük mü?
    <    Küçük mü?
    >=   Büyük veya eþit mi?
    <=   Küçük veya eþit mi?

    Karþýlaþtýrmanýn sonucu:

    1 -> Doðru (true)
    0 -> Yanlýþ (false)
    */


    /*
    ============================================================
                            2. if
    ============================================================

    if:
    "Eðer bu koþul doðruysa aþaðýdaki kodu çalýþtýr."

    Yapýsý:

        if (koþul)
        {
            // Koþul doðruysa çalýþacak kodlar
        }
    */

    int yas = 20;

    if (yas >= 18)
    {
        printf("18 yasindan buyuksun\n");
    }


    /*
    ============================================================
                        3. if - else
    ============================================================

    if  -> Koþul doðruysa
    else -> Koþul yanlýþsa

    Örneðin yaþ 18 veya üzerindeyse yetiþkin,deðilse çocuk olarak deðerlendirebiliriz.
    */

    if (yas >= 18)
    {
        printf("Yetiskin\n");
    }
    else
    {
        printf("18 yasindan kucuk\n");
    }


    /*
    ============================================================
                        4. else if
    ============================================================

    Birden fazla koþulu kontrol etmek için kullanýlýr.

    Program koþullarý yukarýdan aþaðýya kontrol eder.Ýlk doðru olan koþulun içerisindeki kod çalýþýr.
    */

    int notu = 75;

    if (notu >= 90)
    {
        printf("AA\n");
    }
    else if (notu >= 80)
    {
        printf("BA\n");
    }
    else if (notu >= 70)
    {
        printf("BB\n");
    }
    else if (notu >= 60)
    {
        printf("CB\n");
    }
    else
    {
        printf("Basarisiz\n");
    }


    /*
    ============================================================
                    5. KARÞILAÞTIRMA ÖRNEÐÝ
    ============================================================
    */

    int sayi = 10;

    if (sayi == 10)
    {
        printf("Sayi 10'a esit\n");
    }

    if (sayi != 5)
    {
        printf("Sayi 5'e esit degil\n");
    }

    if (sayi > 5)
    {
        printf("Sayi 5'ten buyuk\n");
    }

    if (sayi < 20)
    {
        printf("Sayi 20'den kucuk\n");
    }


    /*
    ============================================================
                    6. MANTIKSAL OPERATÖRLER
    ============================================================

    Birden fazla koþulu birleþtirmek için kullanýlýr.

    && -> VE
    || -> VEYA
    !  -> DEÐÝL

    && kullanýldýðýnda bütün koþullarýn doðru olmasý gerekir.

    || kullanýldýðýnda koþullardan en az birinin doðru olmasý yeterlidir.
    */

    int yas2 = 20;
    int ehliyet = 1; // 1 -> Var, 0 -> Yok

    // Ýki koþulun da doðru olmasý gerekiyor.
    if (yas2 >= 18 && ehliyet == 1)
    {
        printf("Arac kullanabilirsiniz.\n");
    }
    
    // Koþullardan en az birinin doðru olmasý yeterli.
    if (yas2 < 18 || ehliyet == 0)
    {
        printf("Arac kullanamazsiniz.\n");
    }


    /*
    ============================================================
                            7. ! OPERATÖRÜ
    ============================================================

    ! bir koþulun sonucunu tersine çevirir.

    true  -> false
    false -> true
    */

    int ogrenciMi = 1;

    if (!ogrenciMi)
    {
        printf("Ogrenci degil\n");
    }
    else
    {
        printf("Ogrenci\n");
    }


    /*
    ============================================================
                        8. ÝÇ ÝÇE if
    ============================================================

    Bir if bloðunun içerisinde baþka bir if kullanýlabilir.
    */

    int kullaniciYasi = 20;
    int kullaniciPuani = 80;

    if (kullaniciYasi >= 18)
    {
        printf("Yas uygun.\n");

        if (kullaniciPuani >= 50)
        {
            printf("Puani da yeterli.\n");
        }
    }
}
