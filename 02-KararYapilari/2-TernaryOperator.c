#include <stdio.h>

main()
{
    /*
    ============================================================
                        TERNARY OPERATÖR
    ============================================================

    Basit if - else iþlemlerini tek satýrda yazmamýzý saðlar.

    Yapýsý: koþul ? doðruysa_deðer : yanlýþsa_deðer;

    Koþul doðruysa "doðruysa_deðer", yanlýþsa "yanlýþsa_deðer" kullanýlýr.

    Ternary operatör bir deðer üretir. Bu deðer bir deðiþkene atanabilir.

    */

    int puan = 70;

    // Puan 60 veya daha büyükse 5 ekle, deðilse 5 çýkar.
    puan = puan >= 60 ? puan + 5 : puan - 5;

    // Ternary operatörün ürettiði deðeri puan deðiþkenine atadýk.
    printf("Ternary hali: %d\n", puan);

    
	// Ayný iþlemin if - else ile yazýlmýþ hâli:
    
    int puan2 = 70;

    if (puan2 >= 60)
    {
        puan2 += 5; // puan2 = puan2 + 5;
    }
    else
    {
        puan2 -= 5; // puan2 = puan2 - 5;
    }

    printf("if-else hali: %d\n", puan2);

}
