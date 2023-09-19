/*

Escreva uma função chamada maxmin que receba um vetor de números inteiros
chamado vetor, uma variável inteira n contendo o tamanho do vetor, e os endereços
de duas variáveis inteiras, maximo e minimo nas quais será retornado o valor do
elemento de maior valor e o valor do elemento de menor valor.
Protótipo da Função:
void maxmin(int vetor[], int n, int &maximo, int &minimo);
Escreva também uma função principal (main) que use a função maxmin

*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo);

int main ()
{
int tamanho, n, maximo, minimo, vetor[100];

cout << "Qual o tamanho do vetor?" <<endl;
cin >> tamanho;

for (int i = 0; i < tamanho; i++)
{
cout << "Digite o número da posição " <<i<< " do vetor." <<endl;
cin >> n;
vetor[i]=n;
}
maxmin( vetor, tamanho, maximo, minimo );
cout << "O maior valor dentro do vetor é: " << maximo << endl;
cout << "O menor valor dentro do vetor é: " << minimo << endl;

return 0;
}

void maxmin(int vetor[], int n, int &maximo, int &minimo)
{
    maximo = vetor[0];
    minimo = vetor[0];
    for (int j=1; j<n; j++)
    {
        if (maximo<vetor[j])
            maximo = vetor[j];

        if (minimo > vetor[j])
            minimo = vetor [j];
    }
}