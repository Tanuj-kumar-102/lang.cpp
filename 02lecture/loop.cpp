#include <iostream>
using namespace std;

int main()
{
    // ##########  while loop  ############
    /*
        int i = 1, num, ans = 0;
        cout << "enter an integer to find sum of odd num";
        cin >> num;

        while (i <= num)
        {
            ans += i;
            i += 2;
        }

        cout << " the total is  " << ans;
        return 0;
    */

    // ############ do while loop #############

    // ###############  for loop  ################

    int num, ans = 0;
    cout << "enter the value that you want sum of prime number" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        bool isBool = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isBool = false;
                break;
            }
        }
        if (isBool)
        {
            ans += i;
        }
    }

    cout << "total is  " << ans;
}
