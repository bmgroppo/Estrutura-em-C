#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	float sal, anual;
	
	cout<< "Digite o seu salário mensal: ";
	cin>> sal;
	
	anual=sal*12;
	
	printf("\nSeu salário anual é: %.2f \n", anual);
		
	return(0);
}

