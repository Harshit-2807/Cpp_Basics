#include <iostream>
using namespace std;
 
int main() 
{
    int n1, n2, n3;
    cout << "Enter 1st Number:";
    cin >> n1;
    cout << "Enter 2nd Number:";
    cin >> n2;
    cout << "Enter 3rd Number:";
    cin >> n3;
    if (n1>n2 && n1>n3)
    {
        cout << "Largest number is: " << n1;
    }
    else if (n2>n1 && n2>n3)
    {
        cout << "Largest number is: " << n2;
    }
    else
    {
        cout << "Largest number is: " << n3;
    }
    return 0;
}
    
    
