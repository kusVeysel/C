#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
	
	
/*
char s[]="abc-de-fgh-i";
printf("%c\n",toupper('j'));
printf("%c\n",tolower('M'));
char *p = strtok(s,"-");
while(p!=NULL){
printf("%s",p);
p=strtok(NULL,"-");	
}
*/
	

/*
	char a[]="abcdefghi";
	int x=strspn(a,"abfc");
	printf("%d\n",x);
	int y=strcspn(a,"jsvf");
	printf("%d\n",y);
*/


/*
	char s[]="cdabefabghi";
	char *p=strchr(s,'b');
	printf("%s\n",p);
	p=strrchr(s,'b');
	printf("%s\n",p);
	p=strpbrk(s,"xag");
	printf("strpbrk sonucu %s\n",p);
	printf("%c\n",*p);
*/

	
/*
	char s[]="cdabefabghi";
	char *p=strstr(s,"ab");
	printf("%s\n",p);
	p=strstr(s,"g");
	printf("p=%s\n",p);
	printf("p[2]=%c\n",p[2]);
	printf("p+1=%s\n",p+1);
*/

	
/*
	char s[]="merhaba";
	strncpy(s,"3eahs",3);
	s[3]='\0';
	printf("s=%s uz=%d",s,strlen(s));
	strncat(s,"9876543210",7);
	printf("\ns=%s uz=%d byte=%d",s,strlen(s),sizeof(s));
*/


/*
	char c[10]="merhaba";
	char *p=strcpy(c,"3eahs");
	printf("%s\n",p);
	char *o=strcat(p,"987");
	printf("%s",o);
*/
}
