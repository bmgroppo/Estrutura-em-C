#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
		
	system("cls");
	printf("**************** Nota e Conceito ****************\n");
	
	float n1, n2, n3, media;
	char conceito;

	printf("\nDigite a primeira nota do aluno: ");
	scanf("%f", &n1);
	
	printf("\nDigite a segunda nota do aluno: ");
	scanf("%f", &n2);
	
	printf("\nDigite a terceira nota do aluno: ");
	scanf("%f", &n3);
	
	media=(n1+n2+n3)/3;
	
	if (media>0 && media<5)
	{printf("\nA média de notas do aluno foi %.2f e seu conceito é Insuficiente", media);}
	if (media>=5 && media<7)
	{printf("\nA média de notas do aluno foi %.2f e seu conceito é Recuperação", media);}
	if (media>=7 && media<9)
	{printf("\nA média de notas do aluno foi %.2f e seu conceito é Bom", media);}
	if (media>=9 && media<=10)
	{printf("\nA média de notas do aluno foi %.2f e seu conceito é Muito bom", media);}

	return(0);
}

