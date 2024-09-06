/*
                !        Concept
Steps:
1.Start with the decimal number.
2.Use num & 1 to get the least significant bit.
3.Append the result to the binary representation.
4.Right shift the number by one (num = num >> 1) to move to the next bit.
5.Repeat the process until the number becomes 0.  

ex-> step-1 5=101 in binary 1=001
     step-2 5&1=001-->1=bit  in binary
     step-3 value = value + bit * pow(10, i);
     step-4 5>>1=10 in binary 
     step-5 Repat this prcoess until num become 0

*/





#include<iostream>
using namespace std;
#include<cmath>


void DecimalToBinary(int n)
{
    int bit;
    int value = 0;
    int i = 1;
    while (n != 0)
    {
        bit = n&1;
        n = n>>1;
        // good approach is coming 
        value = ((i* bit)+ value);
        i=10*i;
        
    }
    cout << value << endl;
}

int main()
{
    int n;
    cout << "Enter a Number : " << endl;
    cin >> n;
    DecimalToBinary(n);
    return 0;
}



