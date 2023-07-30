#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n)
{   
   	for(int i = 0; i < n - 1; i++)
	{
		int minIndex = i;
		for(int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		swap(arr[minIndex],arr[i]);
	}
}

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[100], n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the elements : \n";
    for(int i = 0; i<n; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"The Sorted array is : ";
    selectionSort(arr, n);
    print(arr, n);
}