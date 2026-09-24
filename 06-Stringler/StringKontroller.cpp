#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper & tolower için gerekli kütüphanedir.

main()
{
    char c1[30] = "veysel";
    char c2[30] = "ahmet";
    char c3[30];
    char c4 = 'a';
    char *p1, *p2, *p3, *p4, *p5;

    // ============================================================
    //                      METÝN ARAMA
    // ============================================================

    // strstr: String içinde baþka bir string arar.Bulursa eþleþen yerin adresini döndürür.
    p1 = strstr(c1, "ey");
    printf("strstr => %s\n", p1);

    // strchr: String içinde karakteri baþtan arar.Bulduðu karakterin adresini döndürür.
    p2 = strchr(c1, 'e');
    printf("strchr => %s\n", p2);

    // strrchr: Karakteri sondan baþlayarak arar.Bulduðu karakterin adresini döndürür.
    p3 = strrchr(c1, 'e');
    printf("strrchr => %s\n", p3);

    // strpbrk: Ýkinci stringdeki karakterlerden herhangi birini arar.Ýlk bulduðu karakterin adresini döndürür.
    p4 = strpbrk(c1, "abcvde");
    printf("strpbrk => %s\n", p4);

    // ============================================================
    //                  KARAKTER KÜMESÝ VE UZUNLUK
    // ============================================================

    // strspn: Stringin baþýndan itibaren verilen karakter kümesinde bulunan karakterlerin sayýsýný döndürür.
    int a = strspn(c1, "abcev");
    printf("strspn => %d\n", a);

    // strcspn: Verilen karakterlerden biriyle karþýlaþana kadar baþtan kaç karakter olduðunu döndürür.
    int b = strcspn(c1, "abcsa");
    printf("strcspn => %d\n", b);

    // strlen: Stringin uzunluðunu döndürür. '\0' karakterini saymaz.
    printf("strlen => %zu\n", strlen(c1));

    // ============================================================
    //                KARAKTER DÖNÜÞTÜRME
    // ============================================================

    // toupper: Karakteri büyük harfe dönüþtürür.
    printf("toupper => %c\n", toupper(c4));

    // tolower: Karakteri küçük harfe dönüþtürür.
    printf("tolower => %c\n", tolower(c4));

    /*
    strupr ve strlwr standart C fonksiyonlarý deðildir.Bu yüzden farklý derleyicilerde çalýþmayabilir.

    Bunun yerine kendi döngümüzle stringi dönüþtürebiliriz.
    */

    // Stringi büyük harfe dönüþtürme
    for (int i = 0; c1[i] != '\0'; i++)
    {
        c1[i] = toupper((unsigned char)c1[i]);
    }

    printf("Buyuk harf => %s\n", c1);

    // Stringi tekrar küçük harfe dönüþtürme
    for (int i = 0; c1[i] != '\0'; i++)
    {
        c1[i] = tolower((unsigned char)c1[i]);
    }

    printf("Kucuk harf => %s\n", c1);

    // ============================================================
    //                    METÝN KARÞILAÞTIRMA
    // ============================================================

    /*
    strcmp: Ýki stringi karþýlaþtýrýr.

        0  -> stringler ayný
        <0 -> ilk string alfabetik olarak daha küçük
        >0 -> ilk string alfabetik olarak daha büyük
    */

    printf("strcmp => %d\n", strcmp(c1, c2));

    /*
    strcmpi standart C deðildir.
    Büyük/küçük harf duyarsýz karþýlaþtýrma için iki stringi ayný harf durumuna getirip strcmp kullanabiliriz.
    */

    // ============================================================
    //                    ELEMAN DEÐÝÞTÝRME
    // ============================================================

    /*
    strncpy: c1'in ilk 4 karakterini c3'e kopyalar.

    DÝKKAT: strncpy her zaman '\0' eklemez. Bu nedenle elle ekliyoruz.
    */

    strncpy(c3, c1, 4);
    c3[4] = '\0';

    printf("strncpy => %s\n", c3);

    // strcpy: c1'in tamamýný c3'e kopyalar.
    strcpy(c3, c1);
    printf("strcpy => %s\n", c3);

    /*
    strcat: c2'yi c1'in sonuna ekler.

    c1'in yeterli boþ alaný olmasý gerekir.
    */

    strcat(c1, c2);
    printf("strcat => %s\n", c1);

    /*
    strncat: c2'nin ilk 3 karakterini c1'in sonuna ekler.

    c1'in yeterli kapasitesi olmalýdýr.
    */

    strncat(c1, c2, 3);
    printf("strncat => %s\n", c1);

    // ============================================================
    //                      METÝN PARÇALAMA
    // ============================================================

    /*
    strtok: Stringi belirtilen ayýrýcý karakterlere göre parçalar.

        Örneðin "ahmetveli" stringini "l" karakterinden ayýrýrsak:
            ahmetve
            i
    */

    printf("strtok => ");

    p5 = strtok(c1, "l");

    while (p5 != NULL)
    {
        printf("%s ", p5);
        p5 = strtok(NULL, "l");
    }

    printf("\n");
}
