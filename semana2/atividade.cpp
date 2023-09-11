#include <iostream>
#include <float.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(void){

float pif=M_PI;
double pid=M_PI;

//Letra "a"
cout<< "O menor valor que pode ser representado por uma variável float é"<<FLT_MIN<<endl;
cout<< "O maior valor que pode ser representado por uma variável float é"<<FLT_MAX<<endl;

//Letra "b"
cout<< "O valor de PI com o maior número de casas decimais em float é:" <<setprecision(DBL_MAX)<<pif<<endl;

//Letra "c"
cout<< "O valor de PI com duas casas decimáis é:" <<setprecision(2)<<pif<<endl;
cout<< "O valor de PI com quatro casas decimáis é:" <<setprecision(4)<<pif<<endl;
cout<< "O valor de PI com oito casas decimáis é:" <<setprecision(8)<<pif<<endl;
cout<< "O valor de PI com 16 casas decimáis é:" <<setprecision(16)<<pif<<endl;

/*
cout<< "O menor valor que pode ser representado por uma variável double é"<<DBL_MIN<<endl;
cout<< "O maior valor que pode ser representado por uma variável double é"<<DBL_MAX<<endl;
*/

//Letra "d"
 cout<< "DBL_MAX: "<< DBL_MAX<< endl; 
 cout<< "O valor de PI com o maior número de casas decimais em double é:" <<setprecision(DBL_MAX)<<pid<<endl;

//Letra "e"
cout<< "O valor de PI com duas casas decimáis é:" <<setprecision(2)<<pid<<endl;
cout<< "O valor de PI com quatro casas decimáis é:" <<setprecision(4)<<pid<<endl;
cout<< "O valor de PI com oito casas decimáis é:" <<setprecision(8)<<pid<<endl;
cout<< "O valor de PI com 16 casas decimáis é:" <<setprecision(16)<<pid<<endl;

return 0;