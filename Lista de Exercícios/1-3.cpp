#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	

	
	system("cls");
	printf("**************** Média de Notas ****************\n\n");
	
	
	float n1, n2, n3, n4, media;
		
	cout<< "Digite a Nota1: ";
	cin>> n1;
	
	cout<< "Digite a Nota2: ";
	cin>> n2;
	
	cout<< "Digite a Nota3: ";
	cin>> n3;
	
	cout<< "Digite a Nota4: ";
	cin>> n4;
	
	media=(n1+n2+n3+n4)/4;
	
	printf("\nA média de notas do aluno é: %.2f \n", media);
		
	return(0);
}

