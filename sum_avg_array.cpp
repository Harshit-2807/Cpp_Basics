#include <iostream>
using namespace std;
int main()
{
    // int arr[7]={1,2,3,4,5,6,7};
    int n,sum=0;
    double avg;
    cout << "Enter total number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements \n";
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++)
        sum+=arr[i];
    cout << "Sum of elements is: " << sum << "\n";
    cout << "Average of elements is: " << double(sum)/double(n);
    return 0;
}