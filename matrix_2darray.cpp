#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    int arr[m][n];
    int tarr[n][m];
    cout << "Enter array elements \n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            tarr[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout << tarr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}