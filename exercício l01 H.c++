#include "iostream"
#include "math.h"
using namespace std;

// Sub rotina em Void
void calcularVolume(double comprimento, double largura, double altura) {
    
    double volume = comprimento * largura * altura;

    //Imprimir resposta 
    cout<< "O volume do retangulo e: " << volume << endl;
}
   // Inserir o número do comprimento, largura e retangulo
   int main() {
    double comprimento, largura, altura;

    cout << "Digite o comprimento do retangulo: ";
    cin >> comprimento;

    cout << "Digite a largura do retangulo: ";
    cin >> largura;

    cout << "Digite a altura do retangulo: ";
    cin >> altura;
   
    // Cálculo para saber o volume 
    calcularVolume(comprimento, largura, altura);

   

    system("pause 5");
    return 0;
}
