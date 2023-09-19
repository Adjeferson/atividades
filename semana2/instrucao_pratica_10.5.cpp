/*
aça uma função “insere_meio(int vet[ ], int tam)” que insere um elemento no meio
de um vetor de números inteiros. Depois faça o programa principal para testar a sua
função.
Por exemplo:
Sendo o vetor = {1,2,3,4,5,6} e qtde = 6, ao usar
insere_meio(vetor, qtde, 100),
será retornado o novo valor de qtde, que passou a ser 7, e o vetor, ao término
da função, passará a ficar da seguinte forma: vetor= {1,2,3,100,4,5,6}.
Protótipo da função: int insere_meio( int *vetor, int qtde, int elemento);
*/

#include <iostream>

using namespace std;

// Protótipo da função
int insere_meio(int vetor[], int& qtde, int elemento);

int main() {
    const int tamanhoMaximo = 100; // Tamanho máximo do vetor
    int vetor[tamanhoMaximo] = {1, 2, 3, 4, 5, 6};
    int qtde = 6; // Tamanho atual do vetor

    int elemento = 100;

    // Chamando a função para inserir o elemento no meio do vetor
    int novoTamanho = insere_meio(vetor, qtde, elemento);

    if (novoTamanho == -1) {
        cout << "O vetor está cheio, não é possível inserir mais elementos." << endl;
    } else {
        cout << "Novo tamanho do vetor: " << novoTamanho << endl;
        cout << "Novo vetor: ";
        for (int i = 0; i < novoTamanho; i++) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Implementação da função insere_meio
int insere_meio(int vetor[], int& qtde, int elemento) {
    const int tamanhoMaximo = 100; // Tamanho máximo do vetor

    // Verifica se o vetor está cheio
    if (qtde >= tamanhoMaximo) {
        return -1; // Retorna -1 para indicar que não é possível inserir mais elementos
    }

    // Calcula a posição do meio do vetor
    int posicaoMeio = qtde / 2;

    // Desloca os elementos à direita da posição do meio para acomodar o novo elemento
    for (int i = qtde; i > posicaoMeio; i--) {
        vetor[i] = vetor[i - 1];
    }

    // Insere o elemento no meio do vetor
    vetor[posicaoMeio] = elemento;

    // Incrementa o tamanho atual do vetor
    qtde++;

    return qtde;
}
