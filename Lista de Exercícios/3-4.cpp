#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** INSS ****************\n");

    float s;

    printf("\nDigite o salário: ");
    scanf("%f", &s);

    	if (s<= 600)
		{printf("\nVocê está isento de desconto\n");}
    	else if (s>600 && s<=1200)
		{printf("\nSeu desconto de INSS é de: R$%.2f\n", s*0.2);}
    	else if (s>1200 && s<=2000)
		{printf("\nSeu desconto de INSS é de: R$%.2f\n", s*0.25);}
			 else
			{printf("\nSeu desconto de INSS é de: R$%.2f\n", s*0.3);}
	
}

