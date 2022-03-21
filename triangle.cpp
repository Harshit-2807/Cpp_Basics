#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3;
    cout << "Enter the angles";
    cin >> a1 >> a2 >> a3;
    if(a1+a2+a3==180)
        cout << "It is a triangle";
    else
        cout << "Invalid triangle";
    return 0;
}