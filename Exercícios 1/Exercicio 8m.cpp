#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int main(){

	int i, d;
	
	printf("Digite sua idade (em anos): ");
	scanf("%d", &i);

	d=i*365;
	
	printf("\nVoce possui %.d",d); printf(" dias de vida");

return 0;


}
