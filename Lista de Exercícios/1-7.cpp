#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	

	
	system("cls");
	printf("**************** Soma, Quadrado e Raiz ****************\n");
	
	float n1, n2, soma, quad, raiz;	
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	
	soma=n1+n2;
	quad=pow(soma,2);
	raiz=sqrt(soma);
		
	printf("\nA soma dos dois n�meros �: %.2f",soma);
	printf("\nO quadrado de %.2f �: %.2f",soma, quad);
	printf("\nA raiz quadrada de %.2f �: %.2f",soma, raiz);

		
	return(0);
}

