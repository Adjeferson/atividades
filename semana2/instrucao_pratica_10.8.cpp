/*
Faça uma função chamada conta_primos que receba um vetor de números inteiros e retorne a quantidade de números do vetor que são primos.
Lembrando que um número primo é aquele divisível apenas por 1 e por ele mesmo.
Protótipo da função:
int conta_primos (int *vet, int qtde);
*/

#include <iostream>
#include <vector>

using namespace std;

int conta_primos (int vet[], int qtde)
{
    for (int i = 2; i < numero; i++)
    {
        if (numero % i ==0)

    
    }
    

}

int main ()
{
    int elementos, numero;

    cout <<"Quantos elementos tem o vetor?" << endl;
    cin >> elementos;

    for (int i = 0; i < elementos; i++)
    {
        cout << "Qual o número inteiro da posição " << i<< " ?" <<endl;
        cin >> numero;
        vet[i] = numero;
    }
    cout << "A quantidade de números primos é:" << endl;
    multiplica_por_n(vet, qtde, n);

    for (int i = 0; i < qtde; i++)
    {
        cout << vet[i] << " ";
    }
    return 0;
    

}