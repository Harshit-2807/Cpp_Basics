#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3;
    cout << "Enter the angles: ";
    cin >> a1 >> a2 >> a3;
    if(a1+a2+a3 != 180)
        cout << "It is not a triangle";
    else
        if(a1==a2 and a1==a3)
            cout << "It is an equilateral triangle";
        else if(a1==a2 or a1==a3 or a2==a3)
            cout << "It is an isosceles triangle";
        else
            cout << "It is a scalene triangle";
    return 0;
    
}