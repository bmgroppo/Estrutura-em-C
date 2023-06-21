
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
	int op;
	string nome[20];
	string tel[20];

	cout << "1. Cadastro" << endl;
    cout << "2. Consulta" << endl;
    cout << "Digite sua opcao: ";
    cin >> op;
	
while(true){

	if(op==1){
   		 for(int i=0;i<2;i++){
		cout<<endl<<"Digite o " <<i+1<<" nome: ";
		cin>>nome[i];
		
		cout<<endl<<"Digite o " <<i+1<<" telefone: ";
		cin>>tel[i];
		}
    if (op==2){
	   
       for(int i=0;i<2;i++){
		cout<<endl<<nome[i]<<endl;
		cout<<endl<<tel[i]<<endl;
       }
}
}
}
}