#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of pyramid: ";
    cin >> n;
    cout << "Pattern is : " << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row ; col++) // ye khatam hoga us kay baad than next wala chalega
        {
            cout << " ";
        }

        for (int col = 0; col < n-row; col++)
        {
            cout << "* ";// space after * is important
        }

        cout << endl;
    }
    return 0;
}