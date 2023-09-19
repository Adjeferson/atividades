#include <iostream>
#include <cmath>

using namespace std;

void hip(double &b, double &c);

int main()
{
    double b, c;

    hip(b, c);

    return 0;
}

void hip(double &b, double &c) 
{
    double a;
    
    cout << "Qual a medida do lado B do triângulo?" << endl;
    cin >> b;
    cout << "Qual a medida do lado C do triângulo?" << endl;
    cin >> c;

    a = sqrt(b * b + c * c);

    cout << "A hipotenusa do triângulo com lado B igual a " << b << " e lado C igual a " << c << " é: " << a << endl;
}
