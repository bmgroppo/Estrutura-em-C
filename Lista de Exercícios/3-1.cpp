#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Mês ****************\n");

    int m;
    char mes;

    printf("\nDigite o Mês em número inteiro: ");
    scanf("%d", &m);
    

    	if (m == 1)
		{printf("\nO mês é Janeiro\n", mes);}
    	else if (m == 2)
		{printf("\nO mês é Fevereiro\n", mes);}
    	else if (m == 3)
		{printf("\nO mês é Março\n", mes);}
   		else if (m == 4)
		{printf("\nO mês é Abril\n", mes);}
		else if (m == 5)
		{printf("\nO mês é Maio\n", mes);}
		else if (m == 6)
		{printf("\nO mês é Junho\n", mes);}
		else if (m == 7)
		{printf("\nO mês é Julho\n", mes);}
		else if (m == 8)
		{printf("\nO mês é Agosto\n", mes);}
		else if (m == 9)
		{printf("\nO mês é Setembro\n", mes);}
		else if (m == 10)
		{printf("\nO mês é Outubro\n", mes);}
		else if (m == 11)
		{printf("\nO mês é Novembro\n", mes);}
		else if (m == 12)
		{printf("\nO mês é Dezembro\n", mes);}
			 else
			{printf("\nCaractere invalido\n");}
	
}

