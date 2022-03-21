#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your total cost: ";
    cin >> a;
    if (a>1000)
    {
        a=a-(a*0.1);
    }
    cout << "Your final amount is: "<<a;
}
    