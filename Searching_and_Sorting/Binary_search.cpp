#include<iostream>

using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[100];
    cout<<"Enter the values of the array : ";
    for (int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to be serached : ";
    cin>>key;
    cout<<endl;

    int Index = binarysearch(arr, size, key);

    cout << "Index of "<<key<<" is " << Index << endl;

    
}