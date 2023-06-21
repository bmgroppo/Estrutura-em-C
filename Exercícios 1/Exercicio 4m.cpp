#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>


int main(){

	float kg;
	
	printf("Digite o valor em kilogramas: ");
	scanf("%f",&kg);
	
	kg=kg*1000;
	
	printf("\nO valor, em gramas, eh: %.0f",kg);

return 0;		
}

