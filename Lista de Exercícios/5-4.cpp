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

    float nota[3];
	float medias[9];
	int aux=0;
	for(int i=0; i<10;i++)
		{cout<<"Digite as notas do "<<i+1<<" aluno:"<<endl;
		
	for(int j=0; j<4;j++)
		{cout<<"Digite o valor da nota "<<j+1<<endl;
		cin>>nota[j];
		}
		medias[i] = (nota[0]+nota[1]+nota[2]+nota[3])/4;
		}
	for(int j=0; j <10; j++)
		{if(medias[j] >= 7)
			{printf("Media de aluno: %.2f\n", medias[j]);
			aux++;
			}
		}
}
	
	
	
	
	
	
