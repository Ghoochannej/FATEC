#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int tam = 5; // definindo tamamanho da pilha

//pilha de n�meros
struct pilha{
	
	int topo;
	int num[5];

	int inserirNum(int i){
		cout << "Digite o n�mero: ";
		cin >> num[i];
		return num[i];
	}
	
} n;

//Verificar se est� Cheia ou Vazia
bool pilhaVazia(pilha p){
	
	if (n.topo == -1)
		return true;
	else
		return false;
	
}

bool pilhaCheia(pilha p){
	
	if(n.topo == tam)
		return true;
	else
		return false;
	
}

//Adicionando valores ao topo da pilha
pilha push(pilha n, int tam){
	double x;
	
	if (pilhaCheia(n)){
		
		cout << "A pilha j� est� cheia!\n";
		system("PAUSE");
		return n;
		
	}else{
		
		for(int i = (n.topo+1); i < 5; i++){
			
			cout << "\nPosi��o Atual:" << i << "�" << endl;
			x = n.inserirNum(i);
			n.topo ++;
			n.num[tam] = x;

		}
		
	}
				
	system("pause");
	return n;
}

pilha pop(pilha n){

	if (pilhaVazia(n)){
		
		cout << "A pilha j� est� vazia!\n";
		system("PAUSE");
		return n;
		
	}	
	
	cout << "\n\nNumero: " << n.num[n.topo] << endl
		 << "Foi REMOVIDO" << endl
		 << "Posi��o: " << n.topo << endl
		 << "Est� VAZIA";
	getch();
	n.num[n.topo] = '\0';
	n.topo--;
	return n;
	
}

pilha exibirPilha(pilha n){
	
	cout << " v FIM DA PILHA" << endl;
	     
	if (pilhaVazia(n)){
		
		cout << "A pilha est� vazia!\n";
		system("PAUSE");
		return n;
		
	} 
	
	for( int i = n.topo ; i >= 0; i --){
		
		cout << "\n\n P: " << i+1;
		cout << "\n N: " << n.num[i];

	}
	
	cout << "\n\n\n ^ INICIO DA PILHA"
		 << "\n\n P = POSI��O"
		 << "\n N = N�MERO" << endl << "\n";
	getch();
	return n;
}

char telaPrincipal(){
	
	cout << "PILHA DE N�MEROS"
		 << "\n 1 - Inserir n�meros no Topo da pilha"
		 << "\n 2 - Remover n�meros do Topo da pilha"
		 << "\n 3 - Exibir Pilha"
		 << "\n ESC - Sair" << endl;
		 
	return getch();
}

void menuPrincipal(pilha n1){
	char tecla;
	n1.topo = -1;

	while(tecla != 27){
		
		system("CLS");
		tecla = telaPrincipal();
		
		if( tecla == '1'){
			n1 = push(n1, tam);
		}else if( tecla == '2'){
			n1 = pop(n1);
		}else if( tecla == '3'){
			system("CLS");
			exibirPilha(n1);		
		}
		
	}
}

int main(int argc, char** argv){

	setlocale(LC_ALL, "PORTUGUESE");
	pilha n1;

	menuPrincipal(n1);

	return 0;
}