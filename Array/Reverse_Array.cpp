#include<iostream>

using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n -1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<"\n";
}

int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;

    int num[100];

    for(int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    reverse(num, 5);
    printarray(num, 5);

    return 0;
}