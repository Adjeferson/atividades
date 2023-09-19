/*
Utilizando os conceitos de structs:
Este programa entra com uma data e verifica se é uma data válida.
*/

#include <iostream>

using namespace std;

struct Data {
    int dia, mes, ano;
 
 };

bool dataValida(int dia, int mes, int ano)
{
    if (ano < 1900 || ano > 2100){
        return false;
    }
    if (mes < 1 || mes > 12){
        return false;
    }
    int diasNoMes = 0;
    if (mes == 2){
        diasNoMes = 
        (ano % 4 ==0 && (ano % 100 !=0 || ano % 400 == 0)) ? 29 : 28;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasNoMes = 30;
    }
    else {
        diasNoMes = 31;
    }
    if (dia < 1 || dia > diasNoMes){
        return false;
    }
    return true;

}
int main()
{
    struct Data data;
    
    cout << "Qual o dia?" << endl;
    cin >> data.dia;
    cout << "Qual o mês?" << endl;
    cin >> data.mes;
    cout << "Qual o ano?" << endl;
    cin >> data.ano; 
    
    if (dataValida(data.dia, data. mes, data.ano)){
        cout << "A data é: " << data.dia << "/";
        cout << data.mes << "/";
        cout << data.ano << endl;
    }
    else {
        cout << "Data inválida" << endl;
    }
    return 0;
}