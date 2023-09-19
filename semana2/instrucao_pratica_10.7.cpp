/*
Faça uma função que receba um vetor de números inteiros por parâmetro, a quantidade de elementos do vetor, e um multiplicador e multiplique cada elemento
do vetor pelo multiplicador.
Protótipo da função: void multiplica_por_n(int *vet, int qtde, int n);
*/

#include <iostream>
#include <vector>

using namespace std;

void multiplica_por_n(int vet[], int qtde, int n)
{
    for (int i = 0; i < qtde; i++)
    {
        vet[i] = n * vet[i];
    }
}

int main ()
{
    int elemento, n, qtde, vet[100];

    cout << "Quantos elementos tem o vetor?" << endl;
    cin >> qtde;
    
    cout << "Qual é o multiplicador?" << endl;
    cin >> n;

    for (int i = 0; i < qtde; i++)
    {
        cout << "Qual é o elemento " << i << " do vetor?" << endl;
        cin >> elemento; 
        vet[i] = elemento;
    }
    
    cout << "Vetor resultado da multiplicação é:" << endl;
    multiplica_por_n(vet, qtde, n);

    for (int i = 0; i < qtde; i++)
    {
        cout << vet[i] << " ";
    }
    return 0;
}