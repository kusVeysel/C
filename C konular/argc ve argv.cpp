#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){ // argv: parametre olarak girilen string deðerler , argc: girilen string deðerlerin adeti

	int dizi[argc],toplam=0;
	
	for(int i=1;i<argc;i++){
		printf("%d. argv = %s\n",i,argv[i]);
		dizi[i-1] = atoi(argv[i]);
	}
	
	for(int i=0;i<argc-1;i++){
		printf("%d. argv ama int = %d\n",i+1,dizi[i]);
	}
	 
	for(int i=0;i<argc-1;i++){
		toplam += dizi[i];
	}
	printf("int'e cevrilmis argv'lerin toplami: %d\n",toplam);
	
}



