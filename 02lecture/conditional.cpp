#include <iostream>
using namespace std;

int main()
{
    // #######   If else  #########
    char a;
    a = cin.get();

    if (a >= 'A' && a <= 'Z')
    {
        cout << a << "  blongs between A to Z";
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << a << "  belongs between a to z";
    }
    else if (a >= '0' && a <= '9')
    {
        cout << a << "  belongs between 0 to 9";
    }
    else
    {
        cout << a << "  is a sembols";
    }

    //  ########### switch case  ###############
}