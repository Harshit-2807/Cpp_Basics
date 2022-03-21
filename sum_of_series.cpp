#include <iostream>
using namespace std;
int main()
{
    int n, r, sum=0;
    cout << "Enter the number: ";
    cin >> n;
    for(r=1;r<=n;r++)
        sum+=(r*r);
    cout << "Sum of series: " << sum;
    return 0;
}