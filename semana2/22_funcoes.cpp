#include <iostream>

using namespace std;

void soma (int n1, int n2);
int soma2 (int n1, int n2);
void tr (string tra[4]);

int main ()
{
    int res;

    string transp[4]={"carro", "moto", "barco", "aviao"};

    soma (7, 3);
    res = soma2(175, 25);

    cout << "Valor de res: " << res << endl;

    tr (transp);

    return 0;

}

void soma (int n1, int n2)
{
        
    cout << "A soma dos números A e B é? " << n1 + n2 << endl;

}

int soma2 (int n1, int n2)
{
    return n1+n2;

}

void tr (string tra[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << tra[i] << endl;
    }
}