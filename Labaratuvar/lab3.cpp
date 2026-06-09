#include<stdio.h>
#include<string.h>
/* 1.Örnek
main(){
	FILE *p;
	p = fopen("1.txt","r");
	char c=fgetc(p);
	while(c!=EOF){
		printf("%c",c);
		c=fgetc(p);
	}
	fclose(p);
}
*/

/* 2.Örnek
main(){
	FILE  *f;
	char str[10];
	f=fopen("1.txt","r");
	while(fgets(str,3,f)!=NULL){
		printf("%s\n",str);
	}
fclose(f);
}
*/

/* 3.Örnek
main(){
	FILE *dosya;
	char satir[100];
	int c=0;
	dosya = fopen("1.txt","r");
	if(dosya==NULL){
		printf("Dosya bulunamadi");
		return 0;
		while(fgets(satir,100,dosya)!=NULL)
		c++;
		printf("Kayit Sayisi = %d",c);
		fclose(dosya);
	}
}
*/

/* 4.Örnek
main(){
	FILE *dosya;
	char ad[20],soyad[20];
	int puan;
	dosya = fopen("1.txt","a");
	int adet;
	printf("Kac adet sayi gireceginizi girin: ");
	scanf("%d",&adet);
	for(int i=0;i<adet;i++){
		scanf("%s %s %d",ad,soyad,&puan);
	}
	for(int i=0;i<adet;i++){
		fprintf(dosya,"%s %s %d",ad,soyad,puan);
	}
	fclose(dosya);
}
*/

/* 5.Örnek
main(){
	FILE *dosya;
	dosya=fopen("1.txt","r");
	
	char ad[20],ad2[20],soyad[20];
	int notu;
	scanf("%s",ad2);
	fscanf(dosya,"%s",ad);
	if(strcmp(ad,ad2)==0){
		fscanf(dosya,"%s %s %d",ad,soyad,&notu);
		printf("%s %s %d",ad,soyad,notu);
	}		
	fclose(dosya);
}
*/
