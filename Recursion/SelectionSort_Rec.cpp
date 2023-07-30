#include <iostream>

using namespace std;

int minIndex(int arr[], int i, int j)
{
	if (i == j)
		return i;

	int k = minIndex(arr, i + 1, j);

    if(arr[i] < arr[k])
    {
        k = i;
    }
	return k;
}

void selectionSort(int a[], int n, int index = 0)
{
	
	if (index == n)
	   return;

	int k = minIndex(a, index, n-1);
    
	if (k != index)
	   swap(a[k], a[index]);

	selectionSort(a, n, index + 1);
}
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
	int arr[100], size;
    cout<<"Enter the number of elements in the array : ";
    cin>>size;
    cout<<"Enter the elements : \n";
    for(int i = 0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<"The Sorted array is : ";
    selectionSort(arr, size);
    print(arr, size);

    return 0;
}
