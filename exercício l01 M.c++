#include "iostream"
using namespace std;

//Sub rotina em Void 
void somaQuadrado(int a, int b, int c){
    
  // Cálculo das soma dos quadrados   
    double quadradoA = a * a;
    double quadradoB = b * b;
    double quadradoC = c * c; 

    double resultado = quadradoA + quadradoB + quadradoC;

// imprimir o resultado do cálculo
    cout<<"A soma dos quadrado em : " << a <<", "<< b << " e "<< c << " e : " << resultado << endl;
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

// Armazenar os números digitalizado pelo usuário
  somaQuadrado(x, y, z);

 system("pause 5");
 return 0;
}