#include "iostream"
#include "stdlib.h"
#include "string.h"
#include "math.h"
#include "stdio.h"

using namespace std;

int main(){
	
	//Vitor Francisco Lamounier
	
    setlocale(LC_ALL, "Portuguese");
    
    float a, b, c, semip, area, alt, base;
    int op;
    string tipo, ladobase;
    
    while(1!=0){
                
    system("cls");
    cout << "MENU" << endl;
    cout << "1 - Inserir o Tri�ngulo" << endl;
    cout << "2 - Exibir os dados sobre o tri�ngulo" << endl;
    cout << "3 - Sair" << endl;
    cin >> op;
    
    if (op==1){
               
        system("cls");
        cout << "INSER��O DO TRI�NGULO";
        cout << "\nInsira a medida do lado A do triangulo (Setor AB): ";
        cin >> a;
        cout << "Insira a medida do lado B do triangulo (Setor AC): ";
        cin >> b;
        cout << "Insira a medida do lado C do triangulo (Setor BC): ";
        cin >> c;
        
         if(a > b + c || b > a + c || c > a + b){
              cout << "A forma inserida n�o se trata de um triangulo" << endl;
              
              system("PAUSE");
              exit(0);     
        }
        
        cout << "Medidas do Tri�ngulo inseridas com sucesso." << endl;
        
        system("PAUSE");
    
    }else if(op==2){

	//Vitor Francisco Lamounier
	
	//PROCESSOS	
    if (a==b && a==c && b==c){
    tipo = "EQUILATERO";              
    }else if (a!=b && a!=c && b!=c){
    tipo = "ISOCELES";      
    }else{
    tipo = "ESCALENO";      
    } 

    if (a > b && a > c){
    ladobase = " o LADO A";
    base = a;
    }else if (b > a && b > c){
    ladobase = " o LADO B";
    base = b;
    }else if (c > a && c > b){
    ladobase = " o LADO C";
    base = c;
    }else{
    ladobase = "qualquer lado (EQUILATERO)";  
    base = a;    
    }      

    semip = (a + b + c) /2;
    area = sqrt( semip*(semip-a)*(semip-b)*(semip-c) );
    alt = area/(0.5*base);

    //SA�DA
    system("cls");
    cout << "DADOS DO TRI�NGULO";
	cout << "\nLado A (Setor AB): " << a << endl;
    cout << "Lado B (Setor AC): " << b << endl;
    cout << "Lado C (Setor BC): " << c << endl;
    cout << "\nEsse � um Trangulo: " << tipo << endl;
    cout << "\nA base do triangulo � " << ladobase << " (" <<base << ")" <<endl;
    cout << "A Altura do Triangulo � " << alt << endl;
    cout << "A area � " << area <<endl;
    cout << "O Semiperimetro � " << semip << endl << endl;
    system("Pause");
        
    }else{
	return 0;
    }
    
	}
	}
	