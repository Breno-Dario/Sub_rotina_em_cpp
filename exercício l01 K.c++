#include "iostream"
#include "math.h"
using namespace std;

// Sub rotina em Void
void converterParaDolar(double valor_real, double cotacao_dolar) {
    
    // Cálculo da conversão reias para dolar
    double valor_dolar = valor_real / cotacao_dolar;
    cout << "Com R$" << valor_real << " voce pode comprar $" << valor_dolar << " dolares." << endl;
}

// Pedindo para o usuário inserir qualquer número
int main() {
    double valor_real, cotacao_dolar;

    cout << "Quantidade de reais disponivel: ";
    cin >> valor_real;

    cout << "Valor da cotacao em dolar: ";
    cin >> cotacao_dolar;

// Armazenar os números digitalizado pelo usuário
    converterParaDolar(valor_real, cotacao_dolar);

    system("pause 5");
    return 0;
}
