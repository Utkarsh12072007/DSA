                    //Concept -->>> No rocket sincse is used


#include <iostream>
#include <cmath>
using namespace std;

void BinaryToDecimal()
{
    int r, Decimal = 0, i = 1, k;
    cout << "Enter the Binary Number : " << endl;
    cin >> k;
    while (k != 0)
    {
        r = k % 10;
        k = k / 10;
        Decimal = Decimal + r *i;
        i=2*i;
    }
    cout << Decimal;
}

int main()
{
    BinaryToDecimal();
    return 0;
}