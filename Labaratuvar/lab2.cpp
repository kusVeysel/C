#include<stdio.h>
#include<stdlib.h>

void yazdir(struct ogrenci *og1){
	printf("%d",og1.no);
}

typedef struct
{
	int no;
	char ad[10]="veysel";
}ogrenci; 

main(){
	ogrenci og1;
	og1.no=3;
	yazdir(og1);
	  

}


