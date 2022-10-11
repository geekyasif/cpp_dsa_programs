#include <iostream>

using namespace std;

int main()
{

    int n = 3;
    int k = (n/2)+1;

    // for (int i = 1; i <= (n / 2) + 1; i++)
    // {

    //     for (int j = 1; j <= ((n*2)/2)-1; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= n; j++)
    //     {

    //         if (j >= i && j <= (n + 1) - i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n/2; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {

            if (i == 1 || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    // for (int i = 1; i <= n; i++)
    // {

    //     i <= (n / 2) + 1 ? k-- : k++;

    //     for (int j = 1; j <= (n / 2) + 1; j++)
    //     {

    //         if (j > k)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    return 0;
}