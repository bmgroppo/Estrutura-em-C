#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	
	system("cls");
	printf("**************** �rea e Per�metro do quadrado ****************\n\n");
	
	float lado, quad, per;
	
	cout<< "Digite o valor do lado de um quadrado (em cm): ";
	cin>> lado;
	
	quad=lado*2;
	per=lado*4;
	
	printf("\nA �rea do quadrado  �: %.2f cm2\n", quad);
	printf("O per�metro do quadrado �: %.2f cent�metros\n", per);
		
	return(0);
}

