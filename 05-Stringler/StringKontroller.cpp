#include<stdio.h>
#include<string.h>
#include<ctype.h> // toupper tolower için

main(){
char c1[10]="veysel";
char c2[10]="ilayda";
char c3[15];
char c4='a';
char *p1,*p2,*p3,*p4,*p5;
p1=strstr(c1,"ey");
p2=strchr(c1,'e');
p3=strrchr(c1,'e');
p4=strpbrk(c1,"abcvde");
int a = strspn(c1,"abcev");
int b = strcspn(c1,"abcsa");

printf("strcspn => %d\n",b); //karakterlerin içinde c1'in karakterleri kaç tane olmadýðýný arar, olan yerde biter

printf("strspn => %d\n",a); //karakterlerin içinde c1'in karakterleri kaç tane olduðunu arar 

printf("strpbrk => %s\n",p4); //String içinde belirtilen karakterleri arar eþlesen ve sonrasýný getirir

printf("strrchr => %s\n",p3); //String içinde belirtilen karakteri arar(sondan baþlar aramaya) eþlesen ve sonrasýný getirir

printf("strchr => %s\n",p2); //String içinde belirtilen karakteri arar eþlesen ve sonrasýný getirir

printf("strstr => %s\n",p1); //String içinde belirtilen stringi arar eþlesen ve sonrasýný getirir
 
printf("toupper => %c\n",toupper(c4)); //c4'ü büyük yapar (karakterler için)
 
printf("tolower => %c\n",tolower(c4)); //c4'ü küçük yapar (karakterler için) 
 
printf("strupr => %s\n",strupr(c1)); //c1'i büyük yapar (stringler için)
 
printf("strlwr => %s\n",strlwr(c1)); //c1'i küçük yapar (stringler için)

printf("strcmpi => %d\n",strcmpi(c1,c2)); //c1 ve c2 karþýlaþtýrýr(ASCII koda göre) büyük küçük duyarsýz, >0, 0 ya da <0 döner
 
printf("strcmp => %d\n",strcmp(c1,c2)); //c1 ve c2 karþýlaþtýrýr(ASCII koda göre) büyük küçük duyarlý , -1, 0 ya da 1 döner

printf("strlen => %d\n",strlen(c1)); // c1'in uzunluðu bulur

printf("strncpy => %s\n",strncpy(c3,c1,4)); //c3'e c1 n kadar kopyalanýr(atanýr),eski veri silinir
 
printf("strcpy => %s\n",strcpy(c3,c1)); //c3'e c1 kopyalanýr(atanýr), eski veri silinir
 
printf("strcat => %s\n",strcat(c1,c2)); //c1'e c2'yi ekler

printf("strncat => %s\n",strncat(c1,c2,3)); //c1'e c2'yi n kadar ekler

printf("strtok => ");
p5=strtok(c1,"l");
while(p5 != NULL){
	printf("%s ",p5);
	p5=strtok(NULL,"l");
}
}
	
