#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** N�meros �mpares ****************\n");
	
	int num,imp,cont=0;
	
		for (cont=1;cont<=5;cont++)
		{printf("\nInforme um n�mero:");
			scanf("%d",&num);
				if(num%2==!0)
				{imp=++imp;}
		}
		printf("\nN�meros �mpares: %d",imp);
	
	
	return(0);
}

