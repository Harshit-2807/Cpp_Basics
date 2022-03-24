#include <iostream>
using namespace std;
int main()
{
    int n,m,sum=0;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter array elements \n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            sum+=arr[i][j];
    }
    cout << "Sum of elements is: " << sum << "\n";
    return 0;
}