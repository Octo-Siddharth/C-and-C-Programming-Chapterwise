#include<iostream>

using namespace std;

int main()
{
    int i, n, num, pos, arr[100];
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : \n";
    for(i = 0; i<n; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"Enter the new element to enter : ";
    cin>>num;
    cout<<"Enter the position : ";
    cin>>pos;
    for(i = n - 1; i >= pos ; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    n = n + 1;
    cout<<"The array after the insertion of element is : \n";
    for(i = 0; i<n; i++)
    {
        cout<<"arr["<<i<<"] = "<< arr[i];
        cout<<"\n";
    }
    return 0;
}