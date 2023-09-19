#include<iostream>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere (string stnome, string stcor, int stpot, int stvelMax)
    {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
        vel = 0;
    }

    void mostra ()
    {
        cout << "O nome do carro é ............: " << nome << endl;
        cout << "A cor do carro é .............: " << cor << endl;
        cout << "A potência do carro é ........: " << pot << endl;
        cout << "A velocidade atual do carro é : " << vel << endl;
        cout << "A velocidade máxima do carro é: " << velMax << endl;

        cout << endl;
    }

    void mudaVel (int mv)
    {
        
        vel = mv;
        
        if (vel > velMax)
        {
            vel = velMax;
        }

        if (vel <0)
        {
            vel = 0;
        }
    }
};

int main ()
{

    Carro car1, car2;
    
    car1.insere("Tornado", "Vermelho", 450, 350);
    car2.insere("Luxo", "Preto", 250, 260);
    
    car1.mostra ();
    car1.mudaVel (400);
    car1.mostra ();
    
    return 0;

}