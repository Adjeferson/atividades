#include <iostream>

using namespace std;

void imp (string txt="Bruno");

int main ()
{
    imp ("YouTube");

    return 0;
}

void imp (string txt)
{
    cout << endl << txt << endl;
}