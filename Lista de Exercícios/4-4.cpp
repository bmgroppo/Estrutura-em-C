#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Mostrar maior e menor ****************\n");
	
	int num, maior, menor, cont;

 		printf("\nEntre com o 1� numero inteiro: ");
 		scanf("%d", &num);

 	maior=num;
 	menor=num;

 			for(cont=1; cont<5; cont++)
 			{printf("\nEntre com o %d� num inteiro: ",cont+1);
 			scanf("%d", &num);

 				if(num>maior)
 					maior=num;
 				else
 					if(num<menor)
 					menor=num;
 			}

 	printf("\nO menor n�mero �: %d", menor);
 	printf("\nO maior n�mero �: %d", maior); 

	return(0);
}

