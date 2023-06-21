#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Calculadora ****************\n");

    float n1, n2;
    char op;

    printf("\nDigite a Operação Desejada (+ - * /): ");
    scanf("%s", &op);
    
	printf("\nDigite o Primeiro termo: ");
    scanf("%f", &n1);

    printf("\nDigite o Segundo termo: ");
    scanf("%f", &n2);

    	if (op == '+')
		{printf("\n%.2f + %.2f = %.2f\n", n1, n2, n1+n2);}
    	else if (op == '-')
		{printf("\n%.2f - %.2f = %.2f\n", n1, n2, n1-n2);}
    		else if (op == '*')
			{printf("\n%.2f x %.2f = %.2f\n", n1, n2, n1*n2);}
   				 else if (op == '/')
				{printf("\n%.2f : %.2f = %.2f\n", n1, n2, n1/n2);}
   					 else
					{printf("\nCaractere invalido\n");}
	
	
    system("pause");
}
