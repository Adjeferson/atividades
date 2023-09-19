/*
Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
valores destas variáveis. Depois faça o programa principal para testar a sua função.
*/

#include <iostream>

using namespace std;

// Função para ordenar quatro variáveis float por referência
void ordenarCrescente(float &a, float &b, float &c, float &d) {
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (c > d) {
        swap(c, d);
    }
    if (a > b) {
        swap(a, b);
    }
}

int main() {
    float num1, num2, num3, num4;

    // Solicitar ao usuário que insira quatro números
    cout << "Digite quatro números float: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Chamar a função para ordenar os números
    ordenarCrescente(num1, num2, num3, num4);

    // Exibir os números ordenados
    cout << "Números ordenados em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}
