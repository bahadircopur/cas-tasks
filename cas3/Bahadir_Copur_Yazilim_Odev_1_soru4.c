#include <stdio.h>
#include <math.h>
int main()
{
	struct ogrenci
	{
		char ad[20];
		int vize1;
		int vize2;
		int final;
	};

	struct ogrenci ogrenciLer [10] = {
		{"özgür",14,50,43},
		{"özay",82,85,70},
		{"Selen",22,72,52},
		{"BEgüm",70,64,35},
		{"sema",74,80,45},
		{"melih",81,66,73},
		{"batuhan",25,34,28},
		{"ahmet",43,25,33},
		{"Amiraslan",48,61,82},
		{"Mübariz",29,30,65}
	};


    for(int i = 0; i < 10; i++) {
    	char* ad = ogrenciLer[i].ad ;
    	int vize1 = ogrenciLer[i].vize1;
		int vize2 = ogrenciLer[i].vize2;
		int final = ogrenciLer[i].final;
		float ham = vize1*3/10 + vize2*3/10 + final*4/10;
		ham = round(ham);
		if (ham>=80 && ham <=100){printf("%s notu AA \n",ad);}
		else if (ham>=80 && ham <=100){printf("%s notu AA \n",ad);}
		else if (ham>=75 && ham <=79){printf("%s notu BA \n",ad);}
		else if (ham>=70 && ham <=74){printf("%s notu BB \n",ad);}
		else if (ham>=65 && ham <=69){printf("%s notu CB \n",ad);}
		else if (ham>=60 && ham <=64){printf("%s notu CC \n",ad);}
		else if (ham>=55 && ham <=59){printf("%s notu DC kaldın! :(\n",ad);}
		else if (ham>=50 && ham <=54){printf("%s notu DD kaldın! :(\n",ad);}
		else if (ham>=45 && ham <=49){printf("%s notu FD kaldın! :(\n",ad);}
		else if (ham>=00 && ham <=44){printf("%s notu FF kaldın! :(\n",ad);}
		else printf("öğrencilerin bilgileri yanlış olmalı\n");

    	
    }
	return 0;
}
