#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int password = 123;

int cikis(int sonuc){
	printf("Iyi gunler!");
}

int iade(int sonuc){
	int bitir;
	printf("Cikis yapmak istiyor musunuz(sayi olarak giriniz)?\n1)Evet\n2)Hayir\n");
	scanf("%d",&bitir);
	
	while(bitir !=1 && bitir !=2){
		printf("Lutfen belirtilen islemi seciniz\n");
		scanf("%d",&bitir);
	}
	
	if(bitir == 1){
		printf("Cikis yapiliyor...\n");
		return bitir;
	}
	else if(bitir == 2){
		return bitir;
	}
}

int islem(int para){
	int islem;
	int miktar;
	printf("Yapmak istediginiz islemi seciniz(sayi olarak giriniz):\n1)Para cekmek\n2)Para yatirmak\n");
	scanf("%d",&islem);
	while(islem !=1 && islem !=2){
		printf("Lutfen belirtilen islemi seciniz\n");
		scanf("%d",&islem);
	}
	if(islem==1){
		printf("Cekmek istediginiz para miktarini giriniz: ");
		scanf("%d",&miktar);
		while(miktar>para){
			printf("Bankanizda yeteri kadar paraniz bulunmamaktadir, lutfen uygun miktari giriniz: ");
			scanf("%d",&miktar);
		}
		if(para>=miktar){
			para -= miktar;
			printf("Guncel bakiyeniz: %dTL\n",para);
			return para;
		}
	}
	else if(islem == 2){
		printf("Yatirmak istediginiz para miktarini giriniz: ");
		scanf("%d",&miktar);
		para += miktar;
		printf("Guncel bakiyeniz: %dTL\n",para);
		return para;
	}
}

int para(int sonuc){
	srand(time(NULL));
int para=rand()%10000+10000;

printf("Mevcut bakiyeniz: %dTL\n",para);
return para;
}

int kontrol(int sifre){

	while(sifre!=password){
		printf("Sifreniz yanlis\nSifrenizi giriniz: ");
		scanf("%d",&sifre);
	}
	if(sifre==password){
		printf("Giris basarili\n");
	}
}

main(){
	int sonuc;
	int (*durum[5])(int) = {kontrol, para, islem, iade, cikis};
	int sifre;
printf("Sifrenizi giriniz: ");
scanf("%d",&sifre);

durum[0](sifre);

	int para = durum[1](sonuc);
	para = durum[2](para);
	
	int bitir = durum[3](sonuc);
	if(bitir == 1){
		cikis[4](sonuc);	
	}
	else{
		while(bitir != 1){
				printf("Mevcut bakiyeniz: %dTL\n",para);
			para = durum[2](para);
			int bitir = durum[3](sonuc);
			if(bitir == 1){
				cikis[4](sonuc);	
			}	
		}
	}

}

