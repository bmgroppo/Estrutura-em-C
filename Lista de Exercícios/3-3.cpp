#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
	
	system("cls");
		printf("**************** Triângulo ****************\n");
		
    int a, b, c;

    printf("\nDigite o primeiro valor do lado do triângulo: ");
    scanf("%d", &a);

    printf("\nDigite o segundo valor do lado do triângulo: ");
    scanf("%d", &b);

    printf("\nDigite o terceiro valor do lado do triângulo: ");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a)
	{if(a == b && a == c)
        printf("\nO triângulo é Equilatero\n");
        else if(a == b || a == c || b == c)
            printf("\nO triângulo é Isosceles\n");
        else
            printf("\nO triângulo é Escaleno\n");
    }
    else 
	{printf("Os 3 lados NAO formam um trinagulo!\n");}
	
    system("pause");
}
