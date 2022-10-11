#include <iostream>

using namespace std;

int main()
{

    int n, k = 0;

    cout << "Enter number : ";
    cin >> n;

    for (int i = 1; i <= n + 2; i++)
    {

        i <= (n / 2) + 2 ? k++ : k--;


        for (int j = 1; j <= (n / 2) + 1; j++)
        {

            if (j < k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }


        for (int j = 1; j <= n + 2; j++)
        {

            if (i == (n / 2) + 2)
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }


        for (int j = 1; j <= n + 2; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}