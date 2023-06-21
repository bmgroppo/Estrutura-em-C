#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	

	
	system("cls");
	printf("**************** Tabuada ****************\n\n");
	
	
	int n, tab;
	
	printf("Digite um número inteiro pra exibir sua tabuada: ");
	scanf("%d", &n);
	
		for(tab=1;tab<=10;tab++){
		
		printf("%d X %d = %d\n",n,tab,n*tab);
}
		
	return(0);
}

