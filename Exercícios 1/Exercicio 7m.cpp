#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int main(){

	float p, cm;
	
	printf("Digite o valor (em polegadas): ");
	scanf("%f", &p);

	cm=p*2.54;
	
	printf("\n%.2f",p); printf(" polegadas eh igual a %.2f",cm); printf(" centimetros");

return 0;


}
