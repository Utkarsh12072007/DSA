#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l;
    cout << "Enter the length : " << endl;
    cin >> k;
    cout << "Enter the width : " << endl;
    cin >> l;
    cout << "Pattern:" << endl;

    for (i = 0; i < k; i++)
    {
        if (i == 0 || i == k - 1)
        {
            for (j = 0; j < l; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (j = 0; j < l; j++)
            {
                if (j == 0 || j == l - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  "; // space doo chondna
                }
            }
        }

        cout << endl;
    }
    return 0;
}