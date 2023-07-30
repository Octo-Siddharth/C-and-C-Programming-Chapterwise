#include<iostream>

using namespace std;

int main()
{
    int i, n, pos, arr[100];
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : \n";
    for(i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"Enter the position of the number to be deleted : ";
    cin>>pos;
    for(i = pos; i < n - 1 ; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout<<"Tha array after deletion : \n";
    for(i = 0; i<n; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i];
        cout<<"\n";
    }
    return 0;
}