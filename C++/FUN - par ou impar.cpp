#include <iostream>
#include <stdlib.h>

using namespace std;

//Vitor Francisco Lamounier

void parimpar(int n){
	
	if (n%2==0){
		cout << n << " � um numero par" << endl;
	}else{
		cout << n << " � um numero impar" << endl;
	}
	
	system("pause");
	
}

void finalizar(){
	exit(0);
}

int inserir(){
	int n;
	
	cout << "\nNumero: ";
	cin >> n;
	system("pause");
	
	return n;
}

int menu(){
	int n=0, op;
	
	while (op!=3){
	system("cls");
	cout << "Algoritmo para saber se o n�mero � par ou impar." << endl
	<< "\nMENU"
	<< "\n1 - Inserir N�mero | Numero atual: " << n
	<< "\n2 - Saber se � par ou impar"
	<< "\n3 - Sair"
	<< "\nOp��o escolhida: ";
	
	cin >> op;
	
	if (op==1){
		n = inserir();
	}else if(op==2){
		parimpar(n);
	}else if(op==3){
		finalizar();
	}else{
		cout << "Op��o inv�lida" << endl;
		system("pause");
	}
	
	}
	return 0;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	menu();
	
	return 0;
}