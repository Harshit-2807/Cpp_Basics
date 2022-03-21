#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Enter any character: ";
    cin >> x;

    if (x >= 'A' and x <= 'Z')
        cout << x << " is an UpperCase character\n";

    else if (x >= 'a' and x <= 'z')
        cout << x << " is an LowerCase character\n";

    else
        cout << x << " is not an aplhabetic character\n";

    return 0;
}