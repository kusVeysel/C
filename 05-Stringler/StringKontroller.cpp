#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper için

main() {
    char c1[20] = "veysel";
    char c2[10] = "ilayda";
    char c3[15];
    char c4 = 'a';
    char *p1, *p2, *p3, *p4, *p5;

    // ============================================================
    //                      METÝN ARAMA
    // ============================================================

    // strstr: String içinde string arar, eþleþtiði yerden itibaren kalan metni döner
    p1 = strstr(c1, "ey");
    printf("strstr => %s\n", p1);

    // strchr: String içinde karakteri baþtan arar, bulduðu yerden itibaren kalan metni döner
    p2 = strchr(c1, 'e');
    printf("strchr => %s\n", p2);

    // strrchr: String içinde karakteri sondan baþlayarak arar, bulduðu yerden itibaren kalan metni döner
    p3 = strrchr(c1, 'e');
    printf("strrchr => %s\n", p3);

    // strpbrk: Ýkinci parametredeki karakterlerden herhangi birini ilk bulduðu yerden itibaren kalan metni döner
    p4 = strpbrk(c1, "abcvde");
    printf("strpbrk => %s\n", p4);


    // ============================================================
    //                  KARAKTER KÜMESÝ VE UZUNLUK
    // ============================================================

    // strspn: c1'in baþýndan itibaren belirtilen karakter kümesine uyan karakter sayýsýný döner
    int a = strspn(c1, "abcev");
    printf("strspn => %d\n", a);

    // strcspn: c1'in baþýndan itibaren belirtilen karakterlerden biriyle karþýlaþana kadar geçen karakter sayýsýný döner
    int b = strcspn(c1, "abcsa");
    printf("strcspn => %d\n", b);

    // strlen: String'in karakter uzunluðunu döner
    printf("strlen => %d\n", (int)strlen(c1));


    // ============================================================
    //                KARAKTER VE METÝN DÖNÜÞTÜRME
    // ============================================================

    // toupper: Tek bir karakteri büyük harfe dönüþtürür
    printf("toupper => %c\n", toupper(c4));

    // tolower: Tek bir karakteri küçük harfe dönüþtürür
    printf("tolower => %c\n", tolower(c4));

    // strupr: Tüm string'i büyük harfe dönüþtürür (Standart dýþýdýr, bazý derleyicilerde çalýþýr)
    printf("strupr => %s\n", strupr(c1));

    // strlwr: Tüm string'i küçük harfe dönüþtürür (Standart dýþýdýr, bazý derleyicilerde çalýþýr)
    printf("strlwr => %s\n", strlwr(c1));


    // ============================================================
    //                    METÝN KARÞILAÞTIRMA
    // ============================================================

    // strcmpi: Ýki string'i büyük/küçük harf duyarsýz karþýlaþtýrýr (ASCII deðerine göre).
    printf("strcmpi => %d\n", strcmpi(c1, c2));

    // strcmp: Ýki string'i büyük/küçük harf duyarlý karþýlaþtýrýr (ASCII deðerine göre).
    printf("strcmp => %d\n", strcmp(c1, c2));


    // ============================================================
    //                    ELEMAN DEÐÝÞTÝRME
    // ============================================================

    // strncpy: c1'den c3'e n kadar karakter kopyalar.
    printf("strncpy => %s\n", strncpy(c3, c1, 4));

    // strcpy: c1'i c3'e tamamen kopyalar.
    printf("strcpy => %s\n", strcpy(c3, c1));

    // strcat: c2 metnini c1'in sonuna ekler.
    printf("strcat => %s\n", strcat(c1, c2));

    // strncat: c2 metninin ilk n karakterini c1'in sonuna ekler.
    printf("strncat => %s\n", strncat(c1, c2, 3));


    // ============================================================
    //                      METÝN PARÇALAMA
    // ============================================================

    // strtok: String'i belirtilen ayýrýcý karakterlere ("l") göre parçalara böler.
    printf("strtok => ");
    p5 = strtok(c1, "l");
    while (p5 != NULL) {
        printf("%s ", p5);
        p5 = strtok(NULL, "l");
    }
    printf("\n");

}
