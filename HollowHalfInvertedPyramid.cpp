#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    cout << "Enter the length : " << endl;
    cin >> k;
    cout<<"pattern :"<<endl;
    for (i = 0; i < k; i++)
    {
        for (j = 0; j <k-i; j++)
        {
            if (i == 0 || j == 0 || j == k-i-1 || i == k - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // ! doo space jaurui hai verna pattern galat banega
            }
        }
        cout << endl;
    }
    return 0;
}