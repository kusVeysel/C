#include<stdio.h>
#include<math.h>
main(){
	int a = 4; 
	a = pow(a,a); //pow: karesini alýr
	printf("pow(4,4) => %d\n",a);
	
	float b = 5;
	b = sqrt(b); // sqrt: kök alýr
	printf("sqrt(5) => %f\n",b);
	
	float c = 2;
	c = exp(c); //exp: e üzeri c
	printf("exp(2) => %f\n",c); 
	
	int d = -4;
	d = abs(d); // abs: negatif tam sayýyý pozitife çevirir
	printf("abs(-4) => %d\n",d);
	
	float e = -4.4;
	e = fabs(e); // fabs: negatif ondalýklý sayýyý pozitife çevirir
	printf("abs(-4.4) => %f\n",e);
	
	float f = 4.8;
	f = floor(f);
	printf("floor(4.8) => %f\n",f); // ondalýklý sayýyý bir alt tam sayýya çevirir
	
	float g = 4.4;
	g = ceil(g);
	printf("ceil(4.4) => %f\n",g); // ondalýklý sayýyý bir üst tam sayýya çevirir
	
	float h = 4.4;
	h = trunc(h); // girilen ondalýklý sayýnýn ondalýklý kýsmýný siler
	printf("trunc(4.4) => %f\n",h);
	
	float i = 4.4;
	i = round(i); // en yakýn tam sayýya yuvarlar
	printf("round(4.4) => %f\n",i);
	
}


