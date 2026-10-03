#include <stdio.h>
#include <math.h>   // Matematiksel fonksiyonlar için (pow, sqrt, exp, fabs, floor, ceil, trunc, round)
#include <stdlib.h> // Tam sayý mutlak deðer fonksiyonu (abs) için

int main() {
    // ------------------------------------------------------------------------
    // 1. pow(taban, üs): Üs alma fonksiyonudur. 
    // Not: pow(a, a) ifadesi a^a demektir (karesini deðil, a üzeri a'yý hesaplar).
    // ------------------------------------------------------------------------
    int a = 4; 
    a = (int)pow(a, a); // 4^4 = 256 hesaplanýr.
    printf("pow(4, 4)   => %d\n", a);

    // ------------------------------------------------------------------------
    // 2. sqrt(x): Sayýnýn karekökünü hesaplar.
    // ------------------------------------------------------------------------
    float b = 5.0f;
    b = sqrt(b); // sqrt(5) ? 2.236068
    printf("sqrt(5)    => %f\n", b);

    // ------------------------------------------------------------------------
    // 3. exp(x): Euler sayýsýnýn (e ? 2.71828) x. kuvvetini hesaplar (e^x).
    // ------------------------------------------------------------------------
    float c = 2.0f;
    c = exp(c); // e^2 ? 7.389056
    printf("exp(2)     => %f\n", c);

    // ------------------------------------------------------------------------
    // 4. abs(x): Tam sayýlarýn (int) mutlak deðerini alýr.
    // ------------------------------------------------------------------------
    int d = -4;
    d = abs(d); // |-4| = 4
    printf("abs(-4)    => %d\n", d);

    // ------------------------------------------------------------------------
    // 5. fabs(x): Ondalýklý sayýlarýn (float/double) mutlak deðerini alýr.
    // ------------------------------------------------------------------------
    float e = -4.4f;
    e = fabs(e); // |-4.4| = 4.4
    printf("fabs(-4.4) => %f\n", e);

    // ------------------------------------------------------------------------
    // 6. floor(x): Ondalýklý sayýyý her zaman bir ALT tam sayýya yuvarlar.
    // ------------------------------------------------------------------------
    float f = 4.8f;
    f = floor(f); // 4.8 -> 4.0
    printf("floor(4.8) => %f\n", f);

    // ------------------------------------------------------------------------
    // 7. ceil(x): Ondalýklý sayýyý her zaman bir ÜST tam sayýya yuvarlar.
    // ------------------------------------------------------------------------
    float g = 4.1f;
    g = ceil(g); // 4.1 -> 5.0
    printf("ceil(4.1)  => %f\n", g);

    // ------------------------------------------------------------------------
    // 8. trunc(x): Yuvarlama yapmadan doðrudan ondalýk kýsmýný kesip atar.
    // ------------------------------------------------------------------------
    float h = 4.5f;
    h = trunc(h); // 4.5 -> 4.0
    printf("trunc(4.5) => %f\n", h);

    // ------------------------------------------------------------------------
    // 9. round(x): Ondalýk kýsmý 0.5 ve üzeriyse üste, altýndaysa alta yuvarlar.
    // ------------------------------------------------------------------------
    float i = 4.4f;
    i = round(i); // 4.4 -> 4.0 (4.5 olsaydý 5.0 olurdu)
    printf("round(4.4) => %f\n", i);

}

