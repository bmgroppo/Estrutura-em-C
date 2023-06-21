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

	printf("\nDigite o código do Cargo:");
	scanf("%d", &cod);
	
	printf("\nDigite o salário: ");
	scanf("%f", &sal);
		
	if (cod==1)
	{printf("\nO cargo é Escriturário e o novo salário é de R$ %.2f", sal*1.5);}
	else
		if (cod==2)
		{printf("\nO cargo é Secretário e o novo salário é de R$ %.2f", sal*1.35);}
		else
			if (cod==3)
			{printf("\nO cargo é Caixa e o novo salário é de R$ %.2f", sal*1.2);}
			else
				if (cod==4)
				{printf("\nO cargo é Gerente e o novo salário é de R$ %.2f", sal*1.1);}
				else
					if (cod==5)
					{printf("\nO cargo é Diretor e não teve aumento, continua R$ %.2f", sal);}
					else
					{printf("Confira o código digitado");}
	return(0);
}

