#include<iostream>
using namespace std;
int main(){
    int k,n;
    cout << "Enter the size of pyramid: ";
    cin >> k;
    n=k/2;
    cout << "Pattern is : " << endl;
    for (int row = 0; row < n-1; row++)
    {
        for (int col = 0; col < n - row - 1; col++) // ye khatam hoga us kay baad than next wala chalega
        {
            cout << " ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";// space after * is important
        }


        cout << endl;
    }
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