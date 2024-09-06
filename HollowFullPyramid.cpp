#include<iostream>
using namespace std;
int main()
{
    int n, col;
    cout << "Enter the size of pyramid: ";
    cin >> n;
    cout << "Pattern is : " << endl;
    for (int row = 0; row < n; row++)
    {
        if (row == 0 || row == n - 1)
        {
            for (col = 0; col < n - row - 1; col++) // ye khatam hoga us kay baad than next wala chalega
            {
                cout << " ";
            }

            for (col = 0; col < row + 1; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (col = 0; col < n - row - 1; col++)
            {
                cout << " ";
            }

            cout << "*";

            for (col = n - row; col < n + row - 1; col++)
            {
                cout << " ";
            }

            cout << "*";
        }
    cout << endl;
    }


    return 0;
}