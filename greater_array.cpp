#include <iostream>
using namespace std;
int main()
{
    // int arr[7]={1,2,3,4,5,6,7};
    int n,c=0;
    cout << "Enter total number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++)
        {
            if(arr[i]>c)
                c=arr[i];
        }
    cout << "Greater element is: " << c << "\n";
    return 0;
}