//Binary Search using recursion
#include<bits/stdc++.h>

using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    if(s > e)
    {
        return false;
    }
    int mid = s + (e - s)/2;

    if(arr[mid] == key)
    {
        return true;
    }
    if(arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[100];
    int size;
    int key;
    cout<<"Enter the elements of the array : ";
    cin>>size;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched : ";
    cin>>key;

    bool found = binarySearch(arr,0, size - 1, key);

    if(found)
    {
        cout<< key <<" is Present !!";
    }
    else
    {
        cout<< key <<" is Absent !!";
    }
    return 0;
}