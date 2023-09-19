#include<iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main () {

    Carro car;
    int qtdCarros;

    cout << "Quantos carros tem no estoque?" << endl;
    cin >> qtdCarros;

    for (int i = 1; i <= qtdCarros; i++)
    {
        
        cout << "Qual o nome do carro: " << i << "?" << endl;
        cin >> car.nome;
        
        cout << "Qual a cor do carro: " << i << "?" << endl;
        cin >> car.cor;

        cout << "Qual a potência do carro: " << i << "?" << endl;
        cin >> car.pot;

        cout << "Qual a velocidade do carro: " << i << "?" << endl;
        cin >> car.velMax;
    }
    for (int i = 1; i <= qtdCarros; i++)
    {

        cout << "O carro " << i << " tem as seguintes características: " << endl;
        cout << "O nome do carro é: " << car.nome << endl;
        cout << "A cor do carro é: " << car.cor << endl;
        cout << "A potência do carro é: " << car.pot << endl;
        cout << "A velocidade máxima do carro é: " << car.velMax << endl;
    }   
        return 0;

}