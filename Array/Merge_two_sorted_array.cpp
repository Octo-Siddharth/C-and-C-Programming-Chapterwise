#include<bits/stdc++.h>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m)
{
    int arr3[200];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    for(int c = 0; c<k; c++)
    {
        cout<<arr3[c]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int arr1[100], arr2[100], m, n;
    cout<<"Enter the number of elements of the array 1 : ";
    cin>>n;
    cout<<"Enter the elements of the array 1 : \n";
    for(int i = 0; i<n; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr1[i];
    }
    cout<<"Enter the number of elements of the array 2 : ";
    cin>>m;
    cout<<"Enter the elements of the array 2 : \n";
    for(int j = 0; j<m; j++)
    {
        cout<<"arr["<<j<<"] = ";
        cin>>arr2[j];
    }
    cout<<"The merge sorted array is : ";
    merge(arr1, n, arr2, m);

}