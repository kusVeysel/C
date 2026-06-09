#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct randevubilgi {
	int tarih[3];
	const char *doktorlar[10]; 
	int polikinlik;
};

struct hastabilgi {
	char isim[16];
	char soyisim[16];
	int yas;
	char sikayet[51];
	char kusur[11];
	char telefon[12];
	char tc[12]; 
};

void randevu(char kusur[11],struct randevubilgi *rndvblg,int y1) {
    
    const char *gecicidoktorlar[10] = {
        "Ahmet-Yilmaz", "Elif-Demir", "Mehmet-Kaya", "Zeynep-Celik", "Can-Ozturk",
        "Asli-Sahin", "Mustafa-Aydin", "Beyza-Yildiz", "Burak-Arslan", "Merve-Koc"
    };
    for(int i = 0; i < 10; i++) {
    rndvblg[y1].doktorlar[i] = gecicidoktorlar[i];
    }
    
    rndvblg[y1].tarih[0] = rand() % 30 + 1;
    rndvblg[y1].tarih[1] = rand() % 12 + 1;
    
    while(rndvblg[y1].tarih[1] < 6) {
		rndvblg[y1].tarih[1] = rand() % 12 + 1;    
    }
    rndvblg[y1].tarih[2] = 2026;
    
    printf("\nRandevu tarihiniz: %d.%d.%d\n", rndvblg[y1].tarih[0], rndvblg[y1].tarih[1], rndvblg[y1].tarih[2]);
    
    int dok = rand() % 10;
    printf("Doktorunuz: %s\n", rndvblg[y1].doktorlar[dok]);
    
    if(strcmpi(kusur, "goz") == 0){
		rndvblg[y1].polikinlik = 1;
    }
    else if(strcmpi(kusur, "kulak") == 0){
		rndvblg[y1].polikinlik = 2;
    }
    else if(strcmpi(kusur, "deri") == 0){
		rndvblg[y1].polikinlik = 3;
    }
    else if(strcmpi(kusur, "kalp") == 0){
		rndvblg[y1].polikinlik = 4;
    }
    else if(strcmpi(kusur, "burun") == 0){
		rndvblg[y1].polikinlik = 5;
    }
    else if(strcmpi(kusur, "kafa") == 0){
		rndvblg[y1].polikinlik = 6;
    }
    else if(strcmpi(kusur,"karin")==0){
		rndvblg[y1].polikinlik = 7;
	}
	else if(strcmpi(kusur,"kol")==0){
		rndvblg[y1].polikinlik = 8;
	}
	else if(strcmpi(kusur,"el")==0){
		rndvblg[y1].polikinlik = 9;
	}
	else if(strcmpi(kusur,"ayak")==0){
		rndvblg[y1].polikinlik = 10;
	}
	else if(strcmpi(kusur,"bacak")==0){
		rndvblg[y1].polikinlik = 11;
	}
	else if(strcmpi(kusur,"bel")==0){
		rndvblg[y1].polikinlik = 12;
	}
	else if(strcmpi(kusur,"bogaz")==0){
		rndvblg[y1].polikinlik = 13;
	}
	else if(strcmpi(kusur,"ense")==0){
		rndvblg[y1].polikinlik = 14;
	}
	else if(strcmpi(kusur,"cene")==0){
		rndvblg[y1].polikinlik = 15;
	}
    else {
		rndvblg[y1].polikinlik = 0;
    }
    
	printf("Polikinlik: %d\n", rndvblg[y1].polikinlik);
}

void hastagiris(struct hastabilgi *hstblg,struct randevubilgi *rndvblg,int x1,int y1) {
	printf("\nIsim: ");
    scanf("%s", hstblg[x1].isim);
	
    printf("Soyisim: ");
	scanf("%s", hstblg[x1].soyisim);
    
	printf("Yas: ");
	scanf("%d", &hstblg[x1].yas);
    
	printf("Telefon numarasi: ");
	scanf("%s", hstblg[x1].telefon);
	
	printf("TC kimlik numarasi: ");
	scanf("%s", hstblg[x1].tc);
	
	printf("Sikayetci oldugunuz bolgeniz neresi (goz/deri/bel vb.): ");
	scanf("%s", hstblg[x1].kusur);
    
	printf("Sikayetinizi aciklayiniz: ");
	scanf(" %[^\n]", hstblg[x1].sikayet);
    
	randevu(hstblg[x1].kusur,rndvblg,y1);   
}

int main(int argc,char *argv[]) { // parametre olarak 1 0 1 0 giriniz
	srand(time(NULL));
	char kayit[6]="evet";
	printf("Hastanemize hosgeldiniz, hasta kaydi icin asagida belirtilen bilgileri giriniz\n");
	
	int x = atoi(argv[1]);
	int x1 = atoi(argv[2]);
	struct hastabilgi *hstblg;
	hstblg = (struct hastabilgi *)malloc(x * sizeof(struct hastabilgi));
	
	int y = atoi(argv[3]);
	int y1 = atoi(argv[4]);
	struct randevubilgi *rndvblg;
	rndvblg = (struct randevubilgi *)malloc(y * sizeof(struct randevubilgi));
	
	while(strcmpi(kayit,"evet") == 0){
	hastagiris(hstblg,rndvblg,x1,y1);
	printf("\nBaska hasta kaydi yapacak misiniz? ");
	scanf("%s",kayit);
	while(strcmpi(kayit,"evet")!=0 && strcmpi(kayit,"hayir")!=0){
		printf("evet ya da hayir giriniz: ");
		scanf("%s",kayit);
	}
	x++;
	hstblg = (struct hastabilgi *)realloc(hstblg , x * sizeof(struct hastabilgi));
	
	y++;
	rndvblg = (struct randevubilgi *)realloc(rndvblg , y * sizeof(struct randevubilgi));
	
	x1++; y1++;
	}
	printf("\n\nSaglicakla hoscakalin...\n");
	free(hstblg);,
	free(rndvblg);
}
