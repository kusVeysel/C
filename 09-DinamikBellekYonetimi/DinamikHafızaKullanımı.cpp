#include<stdio.h>
#include<stdlib.h>
main(){
	
int n,*p1,*p2,*p3;
	printf("Adet giriniz: ");
	scanf("%d",&n);
	printf("\n");
p1=(int*)malloc(n*sizeof(int)); //n tane int tipte alan açar(default deðer yok)
for(int i=0;i<n;i++){
	printf("malloc %d=> %d\n",i+1,p1[i]);
}
printf("\n");
p2=(int*)calloc(n,sizeof(int)); //n tane int tipinde alan açar(default olarak 0 gelir)	
	for(int i=0;i<n;i++){
		printf("calloc %d=> %d\n",i+1,p2[i]);
}
printf("\n");
p3=(int*)malloc(3*sizeof(int)); //pointer 3 adet int tutacak þekilde alan açýldý
for(int i=0;i<3;i++){
	scanf("%d",&p3[i]);
}
p3=(int*)realloc(p3,5*sizeof(int)); //pointer 5 adet int tutacak þekilde güncellendi(2 arttý)
printf("+2 alan\n");
for(int i=3;i<5;i++){
	scanf("%d",&p3[i]);
}
for(int i=0;i<5;i++){
	printf("yukseltme sonrasi pointer elemanlar => %d\n",p3[i]);
}
printf("\n");
p3=(int*)realloc(p3,2*sizeof(int)); //pointer 2 adet int tutacak þekilde güncellendi(3 azaldý)
for(int i=0;i<2;i++){
	printf("azaltma sonrasi pointer elemanlar => %d\n",p3[i]);
}

free(p1);//Hafýzayý boþalt
free(p2);//Hafýzayý boþalt
free(p3);//Hafýzayý boþalt
}





