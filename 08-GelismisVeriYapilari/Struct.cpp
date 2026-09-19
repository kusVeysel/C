#include<stdio.h>
#include<string.h>

struct sinif 
{
	int sayi;
	char ad[10];
};

typedef struct //typedef sayesinde fonksiyonlarda struct kullanýlmasýna gerek kalmaz, typedef kullanýlýrsa struct adý sona yazýlýr
{
	int sayi2;
	char ad2[20];
}pointer;

void gonder(struct sinif a){
	printf("Gonder fonksiyonu icinde %d\n",a.sayi);
	printf("Gonder fonksiyonu icinde %s\n",a.ad);
}

main(){
	struct sinif snf;//struct çaðrýlýr ve deðiþken adý belirlenir
	scanf("%d",&snf.sayi);
	strcpy(snf.ad,"Veysel");
	printf("%s\n",snf.ad);
	
	pointer pntr;
	pointer *p=&pntr; //struct, pointere atanýr
	scanf("%d",&p->sayi2); //pointere atanan struct, . ile deðil, -> ile çaðrýlýr
	strcpy(p->ad2,"Veyselpointer\n");
	printf("%s\n",p->ad2);
	
	gonder(snf);
	
}
