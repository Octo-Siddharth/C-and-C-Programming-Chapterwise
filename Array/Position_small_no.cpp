#include <iostream>

using namespace std;

int main()
{
    int i, n, arr[20], small, pos = 0;
    cout<<"Enter the number of elments in the array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    small = arr[0];

    for(i = 1; i<n; i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
            pos = i;
        }
    }
    cout<<"The smallest element in the array is : "<<small;
    cout<<"\nThe position of the element is : "<<pos;

    return 0;
}
