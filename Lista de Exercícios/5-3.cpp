#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Vetor Par e Impar ****************\n");

    int a = 0,b = 0,numeros[19],impar[19],par[19];
    	
		for(int i=1;i<=20;i++)
		{
    		printf("\nDigite o %dº numero: ",i);
    		scanf("%d",&numeros[i]);
				
				if(numeros[i] % 2==0)
				{par[a++] = numeros[i];}
				else
				{impar[b++] = numeros[i];}
		}
		
			printf("\nTodos de Números Digitados: "); 
			for(int i=1;i<=20;i++)
			{printf(" %d ",numeros[i]);}
    		 
			printf("\nNúmeros Pares: ");
    		for(int i=0;i<a;i++) 
			{printf(" %d ",par[i]);}
	 
		    printf("\nNumeros ímpares:");
			for(int i=0;i<b;i++)
			{printf(" %d ",impar[i]);}
}
	
	
	
	
	
	
