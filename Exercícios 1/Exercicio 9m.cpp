#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int main(){

	float A, B, soma, diminui, multi, divide;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &A);

	printf("Digite o segundo valor: ");
	scanf("%f", &B);
	
	soma=A+B;
	diminui=A-B;
	multi=A*B;
	divide=A/B;
	
	printf("\n A soma do primeiro pelo segundo eh: %.2f",soma);
	printf("\n A subtracao do primeiro pelo segundo eh: %.2f",diminui);
	printf("\n A multiplicacao do primeiro pelo segundo eh: %.2f",multi);
	printf("\n A divisao do primeiro pelo segundo eh: %.2f",divide);
		
return 0;


}
