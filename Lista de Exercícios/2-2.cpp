#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
		
	system("cls");
	printf("**************** Idade e Categoria ****************\n");

	
	int idade;

	printf("\nDigite idade do nadador: ");
	scanf("%d", &idade);
	
	if ( ( idade < 5) || ( idade > 99 ) )
	{printf ("Idade inválida! \n");}
	else
	{if (( idade>=5 ) && (idade<8))
		{printf ("Idade na categoria Infantil A. \n" );}
		else
		{if ((idade>=8 ) && (idade< 11))
			{printf ("Idade na categoria Infantil B. \n");}
			else
			{if ((idade>=11) && (idade<14))
				{printf ("Idade na categoria Juvenil A. \n");}
				else
				{if ((idade>=14 ) && (idade<18))
					{printf ("Idade na categoria Juvenil B. \n");}
					else
					{printf ("Idade na categoria adulto. \n");}
				}
			}
		}
	}

	return(0);
}

