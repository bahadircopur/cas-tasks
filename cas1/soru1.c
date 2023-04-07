#include <stdio.h>
int main()
{
	int x;
	printf("işleme sokmak istediğiniz sayı : \n");
	scanf("%d",&x);
	x = x<5 ? x*2 : x+1;
	printf("işlem sonucu : %d",x);
	return 0 ;
	
}