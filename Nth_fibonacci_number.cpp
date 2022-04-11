/* Define function to calculate Nth fibonacci number */

#include <iostream>
using namespace std;

int fibo(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
    {
        int a=0;
        int b=1;
        int c;
        for(int i=1;i<x;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans=fibo(n);
    cout << ans;
    return 0;
}