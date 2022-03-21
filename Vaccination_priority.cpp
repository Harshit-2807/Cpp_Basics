#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the age: ";
    cin >> a;
    if (a>=60)
    {
        cout << "Eligible for vaccine with highest priority";
    }
    else if(a>=18 && a<60)
    {
        cout << "Eligible for vaccine with lower priority";
    }
    else
    {
        cout << "Minor, not eligible yet";
    }
}