#include <iostream>

using namespace std;

int main()
{
    int arr[20], n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cout<< "\n arr ["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"The array of the elemnts are :  ";
    for(int i = 0; i < n; i++)
    {
        cout<<"\t"<<arr[i];
    }
    return 0;
}