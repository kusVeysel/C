#include <stdio.h>

main()
{
    /*
    ============================================================
    1. KARÞILAÞTIRMA OPERATÖRLERÝ
    ============================================================
    Bir deðeri baþka bir deðerle karþýlaþtýrmak için kullanýlýr.

    ==  -> Eþit mi?
    !=  -> Eþit deðil mi?
    >   -> Büyük mü?
    <   -> Küçük mü?
    >=  -> Büyük veya eþit mi?
    <=  -> Küçük veya eþit mi?

    Karþýlaþtýrma sonucunda:
    1 -> Doðru (true)
    0 -> Yanlýþ (false)
    !!! 0 DIÞINDA HER DEÐER TRUE'dur.

    ÖNEMLÝ:
    =  -> Atama yapar.
    == -> Eþitlik karþýlaþtýrmasý yapar.

    Örneðin:
        sayi = 10;    // 10 deðerini sayi'ya ata
        sayi == 10;   // sayi 10'a eþit mi?
    */

    /*
    ============================================================
    2. if
    ============================================================
    if: "Eðer bu koþul doðruysa aþaðýdaki kodu çalýþtýr."

    Yapýsý:
        if (koþul)
        {
            // Koþul doðruysa çalýþýr
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
    if   -> Koþul doðruysa çalýþýr.
    else -> Koþul yanlýþsa çalýþýr.
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

    Koþullar yukarýdan aþaðýya kontrol edilir. Ýlk doðru koþulun kodlarý çalýþýr ve zincir sona erer.
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
    // if doðru deðilse 1.else if kontrol edilir,o da doðru deðilse 2.if else kontrol edilir, o da doðru deðilse 3.else if kontrol edilir... 
	// hiçbiri doðru deðilse else kontrol edilir, o da true dönmezse hiçbiri çalýþmaz.

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
    
    // Bunlar farklý yapýlardýr birinin doðru ya da yanlýþ olmasý diðerlerini etkilemez. Hepsi çalýþýr(kontrol edilir).

    /*
    ============================================================
    6. MANTIKSAL OPERATÖRLER
    ============================================================
    Birden fazla koþulu birleþtirmek için kullanýlýr.

    && -> VE
    || -> VEYA
    !  -> DEÐÝL / SONUCU TERSÝNE ÇEVÝRÝR

    &&: Bütün koþullarýn doðru olmasý gerekir.

    ||: Koþullardan en az birinin doðru olmasý yeterlidir.

    */

    int yas2 = 20;
    int ehliyet = 1; // 1 -> Var, 0 -> Yok

    // Ýki koþulun da doðru olmasý gerekir.
    if (yas2 >= 18 && ehliyet == 1)
    {
        printf("Arac kullanabilirsiniz.\n");
    }

    // Koþullardan en az birinin doðru olmasý yeterlidir.
    if (yas2 < 18 || ehliyet == 0)
    {
        printf("Arac kullanamazsiniz.\n");
    }

    // ehliyet 1 deðilse çalýþýr.
    if (ehliyet != 1)
    {
        printf("Ehliyet yok\n");
    }

    /*
    ============================================================
    7. ! OPERATÖRÜ
    ============================================================
    ! operatörü bir koþulun veya mantýksal deðerin sonucunu tersine çevirir.

    true  -> false
    false -> true

    Örneðin:
        !1 -> 0
        !0 -> 1

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

    Buna iç içe if (nested if) denir.
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
