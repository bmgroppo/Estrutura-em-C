#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Conta consoantes char palavra [50]****************");
  
  char frase[10];
    char consoante[10];
    int v=0;
    printf("\nDigite uma palavra: ");
    int i=strlen(gets(frase));
    for(int cont=0;cont<i;cont++){
    	if((frase[cont]!='A')&&(frase[cont]!='a')&&(frase[cont]!='e')&&(frase[cont]!='E')&&(frase[cont]!='i')&&(frase[cont]!='I')&&(frase[cont]!='o')&&(frase[cont]!='O')&&(frase[cont]!='u')&&(frase[cont]!='U')){
    	 	consoante[v++]=frase[cont];
		}
	}
	printf(" Consoantes Digitadas: %i",v);	
	
	return(0);
}
	


