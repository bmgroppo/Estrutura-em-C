#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
		
	system("cls");
	printf("**************** Cargo e aumento ****************\n");
	
	
	float sal;
	int cod;

	printf("\nDigite o c�digo do Cargo:");
	scanf("%d", &cod);
	
	printf("\nDigite o sal�rio: ");
	scanf("%f", &sal);
		
	if (cod==1)
	{printf("\nO cargo � Escritur�rio e o novo sal�rio � de R$ %.2f", sal*1.5);}
	else
		if (cod==2)
		{printf("\nO cargo � Secret�rio e o novo sal�rio � de R$ %.2f", sal*1.35);}
		else
			if (cod==3)
			{printf("\nO cargo � Caixa e o novo sal�rio � de R$ %.2f", sal*1.2);}
			else
				if (cod==4)
				{printf("\nO cargo � Gerente e o novo sal�rio � de R$ %.2f", sal*1.1);}
				else
					if (cod==5)
					{printf("\nO cargo � Diretor e n�o teve aumento, continua R$ %.2f", sal);}
					else
					{printf("Confira o c�digo digitado");}
	return(0);
}

