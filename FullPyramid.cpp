/*                  ! Sochnay Ka Tarika
1. sabse phele ek pyramid banaoo random size ka us ka pattern observe karo
2. Remember pattern coloumn may banta hai row may nahi
3. made equation for pattern
4. Is case mai 2 pattern ban rahe hai
5. multiple pattern wale case mai phele uss pattern par loop lago joo phele ban raha hai
6. then baad wale pee loop lago
7. or joo loop lage na voo coloumn vise lagega haar pattern joo coloumn vise ban raha hai
8. Equation bante waqt dhyan rakho kii row=0 say start karo because looo may utkarsh 0
  say starting preffer karta hai .
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of pyramid: ";
    cin >> n;
    cout << "Pattern is : " << endl;
    for (int row = 0; row < n; row++)
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

    return 0;
}