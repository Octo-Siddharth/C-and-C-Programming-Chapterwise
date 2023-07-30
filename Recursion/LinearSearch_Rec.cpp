//linear Search using recursion 
#include<bits/stdc++.h>

using namespace std;

bool linearSearch(int *arr, int size, int key)
{
    if(size == 0)
    {
        return 0;
    }
    if(arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingVal = linearSearch(arr + 1, size - 1, key);

        return remainingVal; 
    }
}

int main()
{
    int arr[100];
    int size;
    int key;
    cout<<"Enter the size of the array : ";
    cin>>size;

    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched : ";
    cin>>key;

    bool found = linearSearch(arr, size, key);

    if(found)
    {
        cout<< key <<" is present !!";
    }
    else
    {
        cout<< key <<" is absent !!";
    }
    return 0;
}