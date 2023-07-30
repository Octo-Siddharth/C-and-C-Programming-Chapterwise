#include<bits/stdc++.h>

using namespace std;

void insertionSort(int *arr, int n)
{
    if(n <= 1)
    {
        return;
    }

    insertionSort(arr, n - 1);

    for(int i = 0; i<n; i++)
    {
        int j;
        int temp = arr[i];
        for(j = i - 1; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void print(int *arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100], size;
    cout<<"Enter the number of elements in the array : ";
    cin>>size;
    cout<<"Enter the elements : \n";
    for(int i = 0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"The sorted array is : ";
    insertionSort(arr, size);
    print(arr,size);

    return 0;
}