#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Contar de 101 a 150 ****************\n");
	
	int cont;
			for (cont=101;cont<=150;cont++)
			{printf("\n%d",cont);}
	
	return(0);
}

