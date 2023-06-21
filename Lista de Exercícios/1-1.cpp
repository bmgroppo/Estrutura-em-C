#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
		
	system("cls");
	printf("**************** Estoque Chuteiras ****************\n\n");
	
	int CHUTEIRAS, A,B,C;
	cout<< "Digite a quantidade de chuteiras da marca A: ";
	cin>> A;
	
	printf("Digite a quantidade de chuteiras da marca B: ");
	scanf("%d", &B);
	
    printf("Digite a quantidade de chuteiras da marca C: ");
	scanf("%d", &C);
	
	printf("\nA quantidade de chuteiras da marca A é: %d \n", A);
		printf("A quantidade de chuteiras da marca B é: %d \n", B);
		printf("A quantidade de chuteiras da marca C é: %d\n ", C);
		
	CHUTEIRAS=A+B+C;
	
	printf("\nO total de chuteiras disponivel na loja é: %d", CHUTEIRAS);
	
	return(0);
}

