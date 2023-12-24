#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter how many ars in a row";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int count = 0;
        for (int j = num - i; j >= 1; j--)
        {
            count++;
            cout << count << " ";
        }
        for (int k = 1; k <= 2 * (i); k++)
        {
            cout << "* ";
        }
        for (int j = num - i; j >= 1; j--)
        {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }
}