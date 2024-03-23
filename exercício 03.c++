#include "iostream"
#include "math.h"
using namespace std;

// Imprimindo tipo de cálculo que usuário quer
int main(){
   int escolha;
   double comprimento;

menu: 
   cout << "Menu: " << endl;
   cout << "1. Calcular diametro" << endl;
   cout << "2. calcular raio" << endl;
   cout << "3. calcular area" << endl;
   cout << "4. sair"<< endl;
   cout << "Escolha uma opcao: " << endl;
   cin >> escolha;

// Utilizando laço de repetição para imprimir o tipo de cálculo que foi escolhido pelo usuário
   switch (escolha){
      
       case 1:
         cout<< "Digite o comprimento do circulo: ";
         cin>> comprimento;
         cout << "O diametro do circulo e: "<< comprimento / M_PI << endl;
         goto menu;

      case 2: 
        cout << "Digite o comprimento do circulo: ";
        cin >> comprimento;
        cout << "O raio do circulo e: " << comprimento / (2 * M_PI) << endl;
        goto menu;    
    
     case 3:
        cout << "Digite o comprimento do circulo: ";
        cin >> comprimento;
        cout << "Area do circulo e: " << M_PI * pow (comprimento/(2 *M_PI), 2)<< endl;
        goto menu;

     case 4:
        cout << "Saindo..."<<endl;
       break;
      default: 
        cout << "opcao ivalida por favor escolha uma opcao valida." << endl;
       goto menu;    
        
   }
   
     return 0;
}