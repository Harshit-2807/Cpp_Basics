#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    int r=c;
    if (r>=65 and r<=90)
    {
        cout << 1;
    }
    else if (r>=97 and r<=122)
    {
        cout << 0;
    }
    else
    {
        cout << -1;
    }
    return 0;
}