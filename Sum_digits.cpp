#include <iostream>
using namespace std;
int main()
{
    int n, r, sum=0;
    cout << "Enter the number: ";
    cin >> n;
    while (n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    cout << "Sum of digits: " << sum;
    return 0;
}