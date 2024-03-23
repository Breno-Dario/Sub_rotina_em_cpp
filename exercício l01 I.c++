#include "iostream"
#include "math.h"
using namespace std;

// Sub rotina em Void
 void quadradoDiferenca(double a, double b){
 
 // Cálculo do quadrado da diferenca
 double diferenca = a - b;
 double quadrado = diferenca * diferenca;
 
 // Imprimir o resultado do cálculo 
 cout<<"O quadrado da diferenca e: "<< quadrado << endl;
}

// Pedindo para o usuário inserir qualquer número
int main(){
  double a, b;

  cout << "Digite um numero para A: ";
  cin >> a;

  cout << "Digite um numero para B: ";
  cin >> b;

// Armazenar os número digitalizado pelo usuário
 quadradoDiferenca( a, b);

system("pause 5");
return 0;
}
