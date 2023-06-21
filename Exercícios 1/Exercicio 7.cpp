#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int main(){

	float n1, n2, divide;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	
	divide=n1/n2;
	
	printf("\nA divisao do primeiro pelo o segundo eh: %.1f",divide);

return 0;


}
