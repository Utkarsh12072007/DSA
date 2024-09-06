/*
!!!!!!!!!!!!!!!!!!!!!Concept!!!!!!!!!!!!!!!!!!!!!!!
Let’s go through the steps:

1.Divide the decimal number by 2.
2.Write down the remainder (this will either be 0 or 1).
3.Update the quotient as the result of the division.
4.Repeat the process until the quotient becomes 0.
5.Read the remainders in reverse order (from the last remainder to the first) to get the binary equivalen

*/


/*   !!!!!!!!!!Reason for error!!!!!!!!!!
    Floating-Point Precision: The pow function returns a floating-point result, even when both inputs are integers. Floating-point numbers are not always represented exactly in memory, especially when dealing with large values or specific powers of 10. This can lead to small rounding errors. For example, pow(10, 2) might return 100.0000001 or 99.9999999, which, when converted to an integer, could give the wrong result.
Type Conversion: Even though you're multiplying the result of pow(10, i) by bit, the result of the multiplication could still be a floating-point number. When you add this result to value, the fractional part might get truncated, leading to unexpected results. For example, if pow(10, i) returns something like 9.999999999, truncating it might result in 9 instead of 10.
Accumulation of Errors: As i increases, the errors in the results of pow(10, i) can accumulate. So, while for small numbers the function might work fine, for larger numbers, these small rounding errors can add up, leading to incorrect binary representations.

Example of Floating-Point Precision Issues:
For a number like 5:

You calculate pow(10, 1) expecting it to return 10.
However, pow(10, 1) might return 9.99999999 due to floating-point precision.
When you multiply by bit and add it to value, the result might be incorrect.
*/

#include <iostream>
#include <cmath>
using namespace std;

void DecimalToBinary(int n)
{
    int bit;
    int value = 0;
    int i = 0;
    while (n != 0)
    {
        bit = n % 2;
        n = n / 2;
        value = value + bit * pow(10, i);
        /* this whole code is not right sometime it give incorrect result
        for 5 it give 100 it is wrong output
        for 10 it give 1001 which is right

        The reason is showing because of pow function
        */
        i++;
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


//             !   Right approach

void DecimalToBinary(int n)
{
    int bit;
    int value = 0;
    int i = 1;
    while (n != 0)
    {
        bit = n % 2;
        n = n / 2;
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

/*  
         Leaning thing
1-->>> power function vo chote level par aacha kam karta hai 
      but ex 2 ka cube vo kar dega but hume agar 10 ki power 
      mai khela hai tho it not right aproach in a code because
      power function floting point value deta hai .

2-->>> than we use this method 
    int i=1;
    while(i<10000){           10**0 10**1--- 10**4  
    cout<<i;         ---->>>> 1     10   100 1000 10000
    i*=10;
    }

*/
