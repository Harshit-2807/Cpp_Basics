/* Define a function to calculate power of a number raised to other i.e. a^b using recursion where the numbers 'a' and 'b' are to be entered by the user
*/
#include <iostream>
using namespace std;
int pow(int x, int y)
{
    if(y==0)
        return 1;
    else
        return x*pow(x,y-1);
}

int main()
{
    int a, b, c;
    cout << "Enter base and its power: ";
    cin >> a >> b;
    c=pow(a,b);
    cout << c;
    return 0;
}