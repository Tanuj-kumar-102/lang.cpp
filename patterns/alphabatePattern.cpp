#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter how many ars in a row";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int count = 0;
        for (int j = i; j >= 1; j--)
        {
            count++;
            char ch = 'A' + i - count;
            cout << ch << " ";
        }
        cout << endl;
    }
}