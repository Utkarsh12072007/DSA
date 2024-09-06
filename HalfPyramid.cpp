#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    cout << "Enter the length of Pyramid : " << endl;
    cin >> k;
    cout << "Pattern" << endl;
    for (i = 0; i <= k; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}