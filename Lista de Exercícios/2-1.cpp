#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
		system("cls");
	printf("**************** Tratamento Formal ****************\n");
	
	char nome, sexo;
	
	printf("\nDigite o seu nome: ");
	scanf("%c", &nome);
	
	printf("Digite o sexo (M ou F): ");
	scanf("%c", &sexo);
	
		if (sexo="M")
		{printf(" Ilmo. Sr %c", nome);}
		else
		{printf ("Ilma. Sra %c", nome);}
		
	return(0);
}

