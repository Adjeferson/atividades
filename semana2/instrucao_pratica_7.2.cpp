#include<iostream>
#include<stdio.h>
#include<cstring>
#include<iomanip>
#include<math.h>    
#include<vector>

using namespace std;

//int main(int argc, char const *argv[10])
int main(void)
{
    int num, invnum;
    int i, j;
    cout << "Qual o seu número?";
    cin >> num;
    
    for (i = 0, j=strlen(num); i<strlen(num)-1; i++, j--)
    
    invnum[j]=num[i];
    if (!(strcmp(invnum, num))){
        cout << "O número digitado é um palíndromo.";
    }
        else{ 
            cout << "O número digitado não é um palíndromo.";
    }

return 0;
}
