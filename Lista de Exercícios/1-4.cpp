#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	
	system("cls");
	printf("**************** Área e Perímetro do quadrado ****************\n\n");
	
	float lado, quad, per;
	
	cout<< "Digite o valor do lado de um quadrado (em cm): ";
	cin>> lado;
	
	quad=lado*2;
	per=lado*4;
	
	printf("\nA área do quadrado  é: %.2f cm2\n", quad);
	printf("O perímetro do quadrado é: %.2f centímetros\n", per);
		
	return(0);
}

