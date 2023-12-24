#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter how many stars in a row";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}