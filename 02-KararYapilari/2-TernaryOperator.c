#include <stdio.h>

main(){
	/*
    ============================================================
                        TERNARY OPERATÖR
    ============================================================

    Basit if - else iþlemlerini tek satýrda yazabiliriz.

    Yapýsý:

        koþul ? doðruysa : yanlýþsa;
    */
	
	int puan = 70;
	
	// puan 60'dan büyük eþitse 5 puan ekleyen, büyük eþit deðilse 5 puan çýkaran kod 
	puan = puan >= 60 ? puan + 5 : puan - 5;
	// ternary operatörden deðer döner bu yüzden bu dönen deðeri puan deðiþkeni içine atadýk.
	
	printf("%d\n",puan); 
	
	
	
	// if - else hali
	
	int puan2 = 70;
	
	if(puan2 >= 60){
		puan2 += 5;
	}
	else{
		puan2 -= 5;
	}
	
	printf("if-else hali: %d",puan2);

}

