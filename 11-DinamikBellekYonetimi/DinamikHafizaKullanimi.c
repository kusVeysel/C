#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc, free için gerekli.

int main() {
    int i, n, *p1, *p2, *p3;

    // Kullanýcýdan kaç adet int alaný istediðimizi alýyoruz.
    printf("Adet giriniz: ");
    scanf("%d", &n);

    /*
        ==================== MALLOC ====================

        malloc() bellekte istediðimiz kadar BYTE alan ayýrýr.

        n tane int istediðimiz için: n * sizeof(int) kadar alan açýyoruz.

        malloc() ayýrdýðý alanýn içini sýfýrlamaz. Yani baþlangýçta içindeki deðerler BELÝRSÝZDÝR.

        Örneðin: p1 = malloc(5 * sizeof(int));
 			bellekte 5 tane int sýðacak kadar yer ayýrýr.
    */
    p1 = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        printf("malloc %d => %d\n", i + 1, p1[i]);

    /*
        ==================== CALLOC ====================

        calloc() da bellekte alan ayýrýr.

        Farký:
        malloc()  -> Alaný ayýrýr, içini baþlatmaz.
        calloc()  -> Alaný ayýrýr ve baþlangýçta 0 yapar.

        calloc(n, sizeof(int)): n tane int için alan ayýr.
    */
    p2 = (int*)calloc(n, sizeof(int));

    for (i = 0; i < n; i++)
        printf("calloc %d => %d\n", i + 1, p2[i]);

    /*
        ==================== REALLOC ====================
    */
    
    // Önce p3 için 3 tane int alaný ayýrýyoruz.
    
    p3 = (int*)malloc(3 * sizeof(int));

    // Ayrýlan 3 alana kullanýcýdan deðer alýyoruz.
    printf("3 adet sayi giriniz: ");
    for (i = 0; i < 3; i++) {
    	scanf("%d", &p3[i]);
	}
        

    /*
        Þimdi p3'ün alanýný 3 int'ten 5 int'e çýkarýyoruz.

        realloc(): Daha önce ayrýlmýþ belleðin boyutunu deðiþtirir.

        Eski deðerler korunur:
            p3[0]
            p3[1]
            p3[2]

        Yeni alanlar:
            p3[3]
            p3[4]

        için yer açýlýr.

        ÖNEMLÝ: realloc() yeni adres döndürebileceði için sonucu tekrar p3'e atýyoruz.
    */
    p3 = (int*)realloc(p3, 5 * sizeof(int));

    printf("+2 alan\n");
    printf("2 adet daha sayi giriniz: ");

    // Yeni açýlan 2 alana deðer giriyoruz.
    for (i = 3; i < 5; i++)
        scanf("%d", &p3[i]);

    // 5 elemanýn tamamýný ekrana yazdýrýyoruz.
    for (i = 0; i < 5; i++)
        printf("yukseltme sonrasi pointer elemanlar => %d\n", p3[i]);

    /*
        Þimdi p3'ün boyutunu 5 int'ten 2 int'e düþürüyoruz.

        realloc() eski alaný küçültür.

        p3[0] ve p3[1] korunur.
        p3[2], p3[3], p3[4] artýk kullanýlamaz.
    */
    printf("\n");

    p3 = (int*)realloc(p3, 2 * sizeof(int));

    for (i = 0; i < 2; i++)
        printf("azaltma sonrasi pointer elemanlar => %d\n", p3[i]);

    /*
        ==================== FREE ====================

        malloc(), calloc() ve realloc() ile dinamik olarak ayýrdýðýmýz belleði program sonunda free() ile býrakýrýz.

        free() yapmazsak ayrýlan bellek kullanýlmaya devam edebilir ve programlarda "memory leak" oluþabilir.
    */
    free(p1);
    free(p2);
    free(p3);
}
