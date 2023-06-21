#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
		
	system("cls");
	printf("**************** Tabuada ****************\n\n");
	
	int n, cont;

	printf("Digite um número inteiro pra exibir sua tabuada: ");
	scanf("%d", &n);
	
		for(cont=1;cont<=10;cont++)
		{printf("%d X %d = %d\n",n,cont,n*cont);}
		
	return(0);
}

