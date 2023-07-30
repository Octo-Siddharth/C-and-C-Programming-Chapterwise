#include<bits/stdc++.h>

using namespace std;

int getSum(int *arr, int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }
    int remainingPart = getSum(arr + 1, size -1);
    int sum = arr[0] + remainingPart;
    return sum;

}

int main()
{
    int arr[100];
    int size;

    cout<<"Enter the number of elements in the array : ";
    cin>>size;

    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    int ans = getSum(arr, size);

    cout<<"The sum is : "<<ans;
}