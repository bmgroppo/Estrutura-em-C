#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;

int main(){
char cpf[11];
printf("Digite o CPF ");
for(int i=0; i<=10; i++){
cpf[i] = getch();
if ((cpf[i] == '1') || (cpf[i] == '2') || (cpf[i] == '3') || (cpf[i] == '4') || (cpf[i] == '5') || (cpf[i] == '6') || (cpf[i] == '7')|| (cpf[i] == '8')|| (cpf[i] == '9')|| (cpf[i] == '0') ){
printf("*");
}
}

printf("\nOs dois ultimos numeros do CPF: ");
for(int i=9; i<=10; i++){
printf("%c",cpf[i]);
}


return 0;
}
