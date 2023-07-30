#include <iostream>

using namespace std;

int main()
{
    int i, n, arr[20], large, sec_lrg;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    large = arr[0];
    sec_lrg = arr[1];
    for(i = 0; i<n; i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }
    for(i = 0; i<n; i++)
    {
        if(arr[i] != large)
        {
            if(arr[i]>sec_lrg)
            {
                sec_lrg= arr[i];
            }
        }
    }
    cout<<"The largest number is : "<<large;
    cout<<"\nThe second largest number is : "<<sec_lrg;

    return 0;

}