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

	printf("\nDigite o salário do funcionário: ");
	scanf("%f", &sal);
	
	printf("\nDigite o tempo de serviço do funcionário (em anos): ");
	scanf("%d",&tempo);
	
	if (tempo>=10)
	{printf("\nNovo salário será de: R$ %.2f \n",sal*1.3);}
	else
	{printf("Novo salário será de: R$ %.2f \n",sal*1.375);}

	return(0);
}

