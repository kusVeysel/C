#include <stdio.h>
#include "BenimKutuphanem.h" // Oluşturduğun kütüphaneyi tırnak işareti içinde ekle.

main() {
	int sayi1,sayi2;
	printf("2 deger giriniz: ");
	scanf("%d %d",&sayi1, &sayi2);
	int deger = Topla(sayi1,sayi2);
	
	printf("Donen deger = %d\n",deger);
	
	printf("Olusturulan kutuphane icindeki sayi degiskeni: %d",sayi);
}
