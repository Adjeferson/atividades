/*Escreva um programa em C++ que imprima todos os números primos de 1 a 100.*/

#include <iostream>

using namespace std;

int main()
{
    int i, divisores, x;

    for (i = 1; i <= 100; i++) //Incrementa a variável X até 100.
    {
        divisores = 0;
        x = i;

        for (int j = 1; j <= x; j++) //Incrementa o divisor de X até o valór máximo de X.
        {
            if (x % j == 0) //Verifica se o resto da divisão de x/j=0.
                divisores++; //Incrementa o númer de divisores de X.
        }

        if (divisores == 2) //O número primo só pode ter dois divisores, 1 e ele mesmo.
            cout << x << " "; // imprime na tela
    }

    return 0;
}



