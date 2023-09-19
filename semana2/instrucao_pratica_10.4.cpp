/*
Escreva uma função calcula que:
a. receba como parâmetros duas variáveis inteiras, X e Y;
b. retorne em X a soma de X e Y;
c. retorne em Y a subtração de X e Y.
*/

#include <iostream>

using namespace std;

void calcula (int &x, int &y, int &soma, int &subtrai)
{
    soma = x + y;
    x = soma;
    
    subtrai = x - y;
    y = subtrai;
}

int main()
{
    int x, y, soma, subtrai;

    cout << "Qual o número inteiro X?" <<endl;
    cin >> x;
    cout << "Qual o número inteiro Y?" <<endl;
    cin >> y;

    //int soma, subtrai;

    calcula (x, y, soma, subtrai);

    cout << "A soma dos dois números é:" << soma << endl;
    cout << "A substração dos dois números é:" << subtrai << endl;
    
    return 0;
}