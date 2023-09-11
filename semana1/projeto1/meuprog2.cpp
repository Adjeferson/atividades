#include<iostream>
#include<stdio.h>
#include<cstring>
#include<iomanip>
#include<math.h>

using namespace std;

int main(void){

float A, B, soma, subtracao, multiplicacao, divisao, parte_decimal;
int primeiro_inteiro, primeiro_decimal;

cout << "Qual o número A?";
cin >> A;
cout << "Qual o número B?";
cin >> B;
soma = A+B;
subtracao = A-B;
multiplicacao = A*B;
divisao = A/B;
parte_decimal = divisao - floor(divisao); // Calcula a parte decimal do número
primeiro_inteiro = static_cast<int>(divisao); // Obtém o primeiro dígito inteiro
primeiro_decimal = static_cast<int>(parte_decimal * 10); // Obtém o primeiro dígito decimal

cout << "A soma os números A e B é:" <<soma<< "."<<endl;
cout << "A subtração do número B em A é:" <<subtracao<< "."<<endl;
cout << "A multiplicação de A e B é:" <<multiplicacao<< "."<<endl;
cout << "O resultado da divisão de A por B é:" <<primeiro_inteiro<<"."<<primeiro_decimal<<"."<<endl;

return 0;

}