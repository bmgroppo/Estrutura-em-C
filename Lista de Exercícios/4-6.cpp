#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Conta pares at� m�ltiplo de 11 ****************\n");
	
	int n, cont;
	while(true)
		{printf("\nDigite um valor: ");
		scanf("%d",&n);
		
		if((n%2) == 0)
		{cont++;}
		
		system("cls");
		printf("**************** Conta pares at� m�ltiplo de 11 ****************\n");
		
		if((n%11) == 0)
		{break;}		
		}
	printf("\nDos valores digitados, %d s�o pares.",cont);


	return(0);
}

