#include <iostream>
using namespace std;
int main()
{
    int n,m,neg=0,pos=0;
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
        {
            if(arr[i][j]>=0)
                pos+=1;
            else
                neg+=1;
        }
    }
    cout << "Count of negative and positive numbers are: " << neg << "\t" << pos << "\n";
    return 0;
}