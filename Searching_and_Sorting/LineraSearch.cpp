#include <iostream>

using namespace std;

int linerasearch(int arr[], int key, int size)
{
    for(int i = 0; i<size; i++)
    {
        if(size == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size ;
    cout<<"Enter the size : ";
    cin>>size;

    int arr[100];

    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key to be serached : ";
    cin>>key;

    bool found = linerasearch(arr, size, key);

    if(found)
    {
        cout<<"Key is present !!";
    }
    else
    {
        cout<<"Key is not present !!";
    }

    return 0;
    
}