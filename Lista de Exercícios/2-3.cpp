#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
		
	system("cls");
	printf("**************** Reajuste Salarial ****************\n");
	
	int tempo;
	float sal;

	printf("\nDigite o sal�rio do funcion�rio: ");
	scanf("%f", &sal);
	
	printf("\nDigite o tempo de servi�o do funcion�rio (em anos): ");
	scanf("%d",&tempo);
	
	if (tempo>=10)
	{printf("\nNovo sal�rio ser� de: R$ %.2f \n",sal*1.3);}
	else
	{printf("Novo sal�rio ser� de: R$ %.2f \n",sal*1.375);}

	return(0);
}

