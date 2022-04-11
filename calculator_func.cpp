/* Calculator to do mathematical function in separate function asking from user what to do */

#include <iostream>
using namespace std;

int calc(int n1, int n2, char o)
{
    if(o=='+')
        cout << n1 << o << n2 << "=" << n1+n2;
    else if(o=='-')
        cout << n1 << o << n2 << "=" << n1-n2;
    else if(o=='*')
        cout << n1 << o << n2 << "=" << n1*n2;
    else
        cout << n1 << o << n2 << "=" << n1/n2;
    return 0;
}

int main()
{
    int n1, n2;
    char o;
    cout << "Enter the numbers: ";
    cin >> n1 >> n2;
    cout << "Input your operator(+,-,*,/) :  ";
    cin >> o;
    calc(n1,n2,o);
    return 0;
}