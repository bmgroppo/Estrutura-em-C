#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Contar maiores de 18 anos ****************\n");
	
	int id, maior, cont;
	
			for (cont=1;cont<=10;cont++)
			{printf("\nDigite a idade:");
			scanf("%d",&id);
		
			if (id>=18)
			{maior++;}
			}
			
	{printf("\nDe todas as idades, %d são maiores de 18 anos",maior);}	

	
	return(0);
}

