#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** M�s ****************\n");

    int m;
    char mes;

    printf("\nDigite o M�s em n�mero inteiro: ");
    scanf("%d", &m);
    

    	if (m == 1)
		{printf("\nO m�s � Janeiro\n", mes);}
    	else if (m == 2)
		{printf("\nO m�s � Fevereiro\n", mes);}
    	else if (m == 3)
		{printf("\nO m�s � Mar�o\n", mes);}
   		else if (m == 4)
		{printf("\nO m�s � Abril\n", mes);}
		else if (m == 5)
		{printf("\nO m�s � Maio\n", mes);}
		else if (m == 6)
		{printf("\nO m�s � Junho\n", mes);}
		else if (m == 7)
		{printf("\nO m�s � Julho\n", mes);}
		else if (m == 8)
		{printf("\nO m�s � Agosto\n", mes);}
		else if (m == 9)
		{printf("\nO m�s � Setembro\n", mes);}
		else if (m == 10)
		{printf("\nO m�s � Outubro\n", mes);}
		else if (m == 11)
		{printf("\nO m�s � Novembro\n", mes);}
		else if (m == 12)
		{printf("\nO m�s � Dezembro\n", mes);}
			 else
			{printf("\nCaractere invalido\n");}
	
}

