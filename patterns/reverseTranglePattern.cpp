#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter how many ars in a row";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = num - i; j >= 1; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}