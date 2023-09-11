#include<iostream>
#include<stdio.h>
#include<cstring>
#include<iomanip>
#include<math.h>

using namespace std;

int main(void)
{
    int num;
    num=1;
    for (int num = 1; num <=100; num++) //Repete a iteração até que o número seja menor ou igual a 100.
    //while (num<= 100; i++) //Repete a iteração até que o número seja menor ou igual a 100.
    {
                    
    if (num%3==0 && num%5==0) //Verifica se a divisão no número por 3 ou 5 é zero.
        {
        cout << "FizzBuzz"<< endl; //Imprime FizzBuzz se o resto da divisão do número por 3 e 5 for zero.
        cout << "Os valores dos elementos são:"<<num<<endl; //Imprime os números.
        }
        else if (num%3==0) //Verifica se a divisão no número por 3 é zero.
        {
        cout <<"Fizz"<< endl; //Imprime Fizz se o resto da divisão do número por 3 for zero.
        cout << "O valor do elemento é:"<<num<<endl; //Imprime o número.
        }
        else if (num%5==0) //Verifica se a divisão no número por 5 é zero.
        {
        cout <<"Buzz"<< endl; //Imprime Fizz se o resto da divisão do número por 5 for zero.
        cout << "O valor do elemento é:"<<num<<endl; //Imprime o número.
        }
    // num= num + 1;
    }

return 0;  

}