#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char *argv[])
{
    if (argc > 1)
    {
        if (!strcmp (argv[1], "Sol"))
        {
            cout << "Vou ao clube." << endl;
        }
        
        else if (!strcmp (argv[1], "Nublado"))
        {
            cout << "Vou ao cinema." << endl;
        }
        
        else
        {
            cout << "Vou ficar em casa." << endl;

        }

    }
   
   return 0;

}