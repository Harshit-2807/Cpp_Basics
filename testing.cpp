#include <iostream>
using namespace std;
int main()
{
    int n,c,sum=0,p=1,i;
    cin >> n;
    cin >> c;
    switch (c)
    {
    case 1:
        i=1;
        while(i<=n)
        {
            sum+=i;
            i+=1;
        }   
        cout << sum;
        break;
    case 2:
        i=1;
        while(i<=n)
        {
            p*=i;
            i+=1;
        }
        cout << p;
        break;
    default:
        cout << "-1";
        break;
    }
    return 0;
}