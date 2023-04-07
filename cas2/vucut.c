#include <stdio.h>
#include <math.h>
int main()
{
	float boy;
	float kilo;
	float vki;
	printf("Boyunuzu metre cinsinden giriniz :");
	scanf("%f",&boy);
	printf("\n");
	printf("Ağılığınızı kilogram cinsinden giriniz :");
	scanf("%f",&kilo);
	vki = kilo/pow(boy,2);
	//printf("\n vüzut kitle indexiniz: %f",vki);
	if (vki <0 && vki <= 18.4)printf("zayıf");
	else if (vki >= 18.5 && vki <= 24.9) printf("normal kilolu");
	else if( vki >25 && vki<=29.9) printf("fazla kilolu");
	else if( vki >30 && vki <1000) printf("obezsin"); 
	// <1000 koşulunun sebebi kullanıcı harf girerse else kısmnına geçmesi
	else printf("verileri doğru girdiğinize emin misiniz?");

	return 0 ;
}