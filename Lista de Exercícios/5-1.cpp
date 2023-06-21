#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Vetor real e invertido ****************\n");
	
int valor[10], cont;

 for(cont=0; cont<10; cont++)
 {
 	printf("\nQual o %dº valor? ", cont+1);
	scanf("%d", &valor[cont]);
 }
 		printf("\nA ordem inversa dos valores é:\n");

 for(cont=0; cont<10; cont++)
 printf("%d\n", valor[9-cont]);


	return(0);
}

