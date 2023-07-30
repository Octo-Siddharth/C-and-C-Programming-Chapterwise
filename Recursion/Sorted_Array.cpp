#include<bits/stdc++.h>

using namespace std;

bool isSorted(int *arr, int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingVal = isSorted(arr + 1, size - 1);

        return remainingVal;
    }

}
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the number of elements in array : ";
    cin>>size;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    bool ans = isSorted(arr, size);

    if(ans)
    {
        cout<<"The array is sorted !!";
    }
    else
    {
        cout<<"The array is not sorted !!";
    }

    return 0;
}