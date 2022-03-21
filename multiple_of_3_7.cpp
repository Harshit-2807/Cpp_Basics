#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(n%3==0  && n%7==0)
        cout << "Multiple of both 3 and 7";
    else if(n%7==0)
        cout << "Multiple of 7";
    else if(n%3==0)
        cout << "Multiple of 3";
    else
        cout << "Multiple of neither 3 nor 7";
    return 0;
}