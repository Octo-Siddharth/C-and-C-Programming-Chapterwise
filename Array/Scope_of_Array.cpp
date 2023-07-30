#include<iostream>

using namespace std;

void update(int arr[], int n)
{
    cout<<"\nInside the function\n";

    arr[0] = 120;

    for(int i = 0; i < n; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    cout<<"Going back to main function !!"<<endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);
    cout<<"\nPrinting the main function!!\n";

    for(int i = 0; i < 3; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<"\n";

    return 0;
}