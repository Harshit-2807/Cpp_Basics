#include <iostream>
using namespace std;
int main()
{
    // int arr[7]={1,2,3,4,5,6,7};
    int n,sum=0;
    cout << "Enter total number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << "Odd element(s) of array is/are: ";
    for(int i=0;i<n;i++)
        if(arr[i]%2==1)
            cout << arr[i] << " ";
    return 0;
}