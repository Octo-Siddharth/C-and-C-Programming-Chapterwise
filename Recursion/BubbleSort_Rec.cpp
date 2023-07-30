#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int *arr, int n)
{
    if(n == 0 || n == 1)
    {
        return;
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, n-1);
}
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the number of elements in the array : ";
    cin>>size;
    cout<<"Enter the elements : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    bubbleSort(arr, size);
    cout<<"The sprted array is : ";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}