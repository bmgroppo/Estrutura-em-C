#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	

	
	system("cls");
	printf("**************** Conversão de Tempo ****************\n\n");
	
	int tempo, h, m, s;	
	
	printf("Digite o tempo em segundos: ");
	scanf("%d", &tempo);
	
	h=tempo/3600;
	m=(tempo-(3600*h))/60;
	s=(tempo-(3600*h)-m*60);
	
	printf("\n%dh:%dm:%ds",h,m,s);

		
	return(0);
}

