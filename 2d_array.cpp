#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter array elements \n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    cout << "Array elements are: \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}