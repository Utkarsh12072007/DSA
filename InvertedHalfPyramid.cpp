#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    cout << "Enter the length : " << endl;
    cin >> k;
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}