#include "iostream"
using namespace std;

// Sub rotina em function
int somaQuadrado(int a, int b, int c){
    
  // Cálculo da soma dos quadrados   
    int quadradoA = a * a;
    int quadradoB = b * b;
    int quadradoC = c * c;
  
  return quadradoA + quadradoB + quadradoC;

}
// Pedindo para o usuário inserir qualquer número
 int main(){
  int x;
  int y;
  int z;

cout<< "Digite um numero para A: ";
 cin >> x;

 cout << "Digite um numero para B: ";
 cin >> y;

 cout << "Digite um numero para C: ";
 cin >> z;

// Armazenando dados temporário digitalizado pelo usuário
  int resultado = somaQuadrado(x, y, z);

// Imprimir a resposta do cálculo
  cout << "A soma do quadrado de: " << x << ", "<< y << " e "<< z << " e :"<< resultado << endl;


 system("pause 5");
 return 0;
 }