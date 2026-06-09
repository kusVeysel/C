#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


/* 10.Örnek
int f(){
	printf("Son");
	
}
main(){
	void(*p)()=f;
	p();
	
}
*/


/* 9.Örnek
int toplam(int sayi){
	if(sayi ==0){
		return 0;
	}
	else{
		return sayi+toplam(sayi-1);
	}
}
main(){
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	int(*p)(int)=toplam;
	sayi=p(sayi);
	printf("%d",sayi);
}
*/


/* 8.Örnek
int bol(int a,int b){
	return a/b;
}
int carp(int a,int b){
	return a*b;
}
int cikar(int a,int b){
	return a-b;
}
int topla(int a,int b){
	return a+b;
}
main(){
	printf("4 islem icin 2 sayi giriniz\n");
	int a,b;
	scanf("%d %d",&a ,&b);
	int(*p[4])(int,int)={topla,cikar,carp,bol};
	for(int i=0;i<4;i++){
		if(p[i]==p[3]){
			printf("Kalan:%d",p[3](a,b));
			break;
		}
		printf("%d\n",p[i](a,b));
	}
}
*/


/* 7.Örnek
int f(int sayi){
	if(sayi==1){
		return 1;
	}
	else{
		return sayi*f(sayi-1);
	}
	
}
main(){
	printf("Sayi giriniz: ");
	int sayi;
	scanf("%d",&sayi);
	int(*p)(int)=f;
	sayi=p(sayi);
	printf("%d",sayi);
}
*/


/* 6.Örnek
int kontrol(char karakter,int sayac){
	int bitir;
	printf("+ mi? , - mi?\n");
	scanf(" %c",&karakter);
	if(karakter == '+'){
		sayac++;
	}
	else if(karakter == '-'){
		sayac--;
	}
	else{
		printf("Uygunsuz karakter girdiniz\n");
	}
	printf("Devam etmek istiyor musunuz?\n1)Evet\n2)Hayir\n");
	scanf("%d",&bitir);

	while(bitir == 1){
			printf("+ mi? , - mi?\n");
			scanf(" %c",&karakter);
			if(karakter == '+'){
				sayac++;
			}
			else if(karakter == '-'){
				sayac--;
			}
			else{
				printf("Uygunsuz karakter girdiniz\n");
			}
		printf("Devam etmek istiyor musunuz?\n1)Evet\n2)Hayir\n");
		scanf("%d",&bitir);
	}
		while(bitir !=1 && bitir !=2){
		printf("1 ya da 2 giriniz\n");
		scanf("%d",&bitir);
	}
	if(bitir == 2){
	return sayac;	
	}
}
main(){
	int sayac=0;
	printf("Mevcut sayiniz: %d\n",sayac);
	char karakter;
	int(*p)(char,int)=kontrol;
	sayac = p(karakter,sayac);
	printf("Mevcut sayiniz: %d\n",sayac);
}
*/


/* 5.Örnek
void enBuyuk(int dizi[4],int Buyuk){
	for(int i=0;i<4;i++){
		scanf("%d",&dizi[i]);
	}
	for(int i=0;i<4;i++){
		if(dizi[i]>Buyuk){
			Buyuk=dizi[i];
		}
	}
	printf("En buyuk sayi %d",Buyuk);
}
main(){
	int Buyuk=-9999999;
	int dizi[4];
	void(*p)(int[],int)=enBuyuk;
	p(dizi,Buyuk);
}
*/

/* 4.Örnek
void hipotenus(int a,int b,int c){
	printf("Dik ucgenin dik kenarlarini giriniz: ");
	scanf("%d %d",&a ,&b);
	c=sqrt(pow(a,2)+pow(b,2));
	printf("%d",c);
}
main(){
	int a,b,c;
	void(*p)(int ,int ,int)=hipotenus;
	p(a,b,c);
}
*/


/* 3.Örnek
int f(int dizi[10]){
	int tut;
	srand(time(NULL));
	for(int i=0;i<10;i++){
		dizi[i]=rand()%60+20;
		printf("%d\n",dizi[i]);
		if(dizi[i]>50){
			tut++;
		}
	}
	return tut;
}
main(){
	
	int dizi[10];
int (*p)(int[])=f;
	int tut=p(dizi);
	printf("%d Adet 50 ustu sayi var",tut);
}
*/


/* 2.Örnek
void deger(int sayi){
scanf("%d",&sayi);
if(sayi>0){
printf("Pozitif");
}
else if(sayi==0){
printf("Sifir");
}
else{
printf("Negatif");
}
}

main(){
int sayi;
void(*p)(int)=deger;
p(sayi);
}
*/

/* 1.Örnek
void mesaj(){
printf("Merhaba Dunya");}

main(){
void(*p)()=mesaj;
p();
}
*/



































