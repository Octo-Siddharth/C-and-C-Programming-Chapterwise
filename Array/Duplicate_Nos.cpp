#include<iostream>

using namespace std;

int main()
{
    int i, j, n, arr[20], flag = 0;
    cout<<"Enter the number of elements if the array : ";
    cin>>n;
    cout<<"Enter the elmemnts : "<<endl;
    for(i = 0; i<n; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    for(i = 0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                flag = 1;
                cout<<"The duplicate numbers are found at location : "<< i <<" and "<< j ;
            }
        }
    }
    if(flag == 0)
    {
        cout<<"Duplicate nummbers not found !!!!";
    }
    return 0;
}