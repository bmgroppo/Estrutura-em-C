#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int main(){

	float n1, n2, n3, n4, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);

	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	media=(n1+n2+n3+n4)/4;
	
	printf("\nA media das notas do aluno eh: %.2f",media);
	
	if (media<6){
	
		printf("\n\nAluno reprovado");
}
	else{
		printf("\n\nAluno aprovado");
}
		
return 0;


}
