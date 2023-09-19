#include <iostream>

using namespace std;

void soma (int n1, int n2);
void soma ();

int main ()
{
    soma (20, 30);
    soma ();

    return 0;
}

void soma (int n1, int n2)
{
    int re;

    re = n1 + n2;

    cout << "soma de " << n1 << " com " << n2 << " = " << re << "." << endl << endl;
    
}

void soma ()
{
    int n1, n2, re;

    cout << "Qual o valor do primeiro número?" << endl;
    cin >> n1;
    cout << "Qual o valor do segundo número?" << endl;
    cin >> n2;

    //n1 = 10;
    //n2 = 20;
    re = n1 + n2;

    cout << "soma de " << n1 << " com " << n2 << " = " << re << "." << endl;
}