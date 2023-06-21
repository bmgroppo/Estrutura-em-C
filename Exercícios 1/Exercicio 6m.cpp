#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int main(){

	float n, lado;
	
	printf("Digite o lado do quadrado (em metros): ");
	scanf("%f", &n);

	lado=n*n;
	
	printf("\nA area do quadrado eh: %.2f",lado); printf(" metros quadrados");

return 0;


}
