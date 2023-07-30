#include<iostream>

using namespace std;

int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e  - s)/2;

    while (s < e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[100];
    cout<<"Enter the values of the array :";
    for(int i = 0;i<size; i++)
    {
        cin>>arr[i];
    }
   
    cout<<"The pivot is : "<<getpivot(arr, size)<<endl;
}