#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Encerra se soma > 15 ****************\n");
	
	int n1, n2;

	do{
		printf("\nDigite um n�mero: ");
		scanf ("%d",&n1);
		
		printf("\nDigite outro n�mero: ");
		scanf ("%d",&n2);
		
		printf("\nA soma � %d\n\n", n1+n2);
	
	system("pause");	
	system("cls");	
	}
		
		while ((n1+n2)<=15);	

	return(0);
}

