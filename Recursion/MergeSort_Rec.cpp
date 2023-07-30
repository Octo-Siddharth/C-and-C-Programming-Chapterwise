#include<bits/stdc++.h>

using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int arrayIndex = s;
    for(int i = 0; i<len1; i++)
    {
       first[i] = arr[arrayIndex++];
    }
    arrayIndex = mid + 1;
    for(int i = 0; i<len2; i++)
    {
        second[i] = arr[arrayIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    arrayIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[arrayIndex++] = first[index1++];
        }
        else
        {
            arr[arrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1)
        {
            arr[arrayIndex++] = first[index1++];
        }
    while(index2 < len2)
        {
            arr[arrayIndex++] = second[index2++];
        }

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e)
{
    if(s >= e)
    {
        return;
    }
    int mid = (s + e)/2;

    mergeSort(arr,s, mid);

    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter the number of elements present in the array : ";
    cin>>size;
    cout<<"Enter the values of array : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr, 0, size - 1);
    cout<<"The sorted array is : ";
    for(int i = 0; i<size; i++)
    {
        cout<< arr[i] << " ";
    }

    return 0;
}