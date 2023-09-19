/*
Faça uma função que receba dois vetores de números inteiros e os seus respectivos tamanhos por parâmetro e retorne um vetor com os valores dos dois
vetores intercalados. Depois faça o programa principal para testar a sua função.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> intercalarVetores(const int vet1[], const int vet2[], int tamanho1, int tamanho2) {
    vector<int> resultado;
    int i = 0, j = 0;

    while (i < tamanho1 || j < tamanho2) {
        if (i < tamanho1) {
            resultado.push_back(vet1[i]);
            i++;
        }

        if (j < tamanho2) {
            resultado.push_back(vet2[j]);
            j++;
        }
    }

    return resultado;
}

int main() {
    int tamanho1, tamanho2;

    cout << "Qual o tamanho do primeiro vetor?" << endl;
    cin >> tamanho1;

    cout << "Qual o tamanho do segundo vetor?" << endl;
    cin >> tamanho2;

    int vet1[100], vet2[100];

    cout << "Digite os elementos do primeiro vetor:" << endl;
    for (int i = 0; i < tamanho1; i++) {
        cin >> vet1[i];
    }

    cout << "Digite os elementos do segundo vetor:" << endl;
    for (int i = 0; i < tamanho2; i++) {
        cin >> vet2[i];
    }

    vector<int> resultado = intercalarVetores(vet1, vet2, tamanho1, tamanho2);

    cout << "Vetor intercalado:" << endl;
    for (int i = 0; i < resultado.size(); i++) {
        cout << resultado[i] << " ";
    }

    cout << endl;

    return 0;
}
