#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	system ("color 1A");
	printf("\n Olá mundo! \n");
	system ("pause");
	system ("cls");
	printf("Bruno");

	return 0;
}
