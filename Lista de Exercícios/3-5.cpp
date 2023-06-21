#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Nota conceito ****************\n");

    float nota;

    printf("\nDigite a nota do aluno em número (1 - 10): ");
    scanf("%f", &nota);

    	if (nota<=1)
		{printf("\nA nota do aluno é: F\n");}
    	else if (nota>1 && nota<=2)
		{printf("\nA nota do aluno é: E\n");}
    	else if (nota>2 && nota<=4)
		{printf("\nA nota do aluno é: D\n");}
		else if (nota>4 && nota<=6)
		{printf("\nA nota do aluno é: C\n");}
		else if (nota>6 && nota<=8)
		{printf("\nA nota do aluno é: B\n");}
		else if (nota>8 && nota<=10)
		{printf("\nA nota do aluno é: A\n");}
			 else
			{printf("\nNota incorreta!");}
	
}

