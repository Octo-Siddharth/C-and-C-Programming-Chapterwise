#include<iostream>

using namespace std;

int getmini(int num[], int n)
{
    int mini = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(num[i] < mini)
        {
            mini = num[i];
        }
    }
    return mini;
}
int getmaxi(int num[], int n)
{
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(num[i] > maxi)
        {
            maxi = num[i];
        }
    }
    return maxi;
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

    cout<<"The maximum value is : "<< getmaxi(num, size)<<endl;
    
    cout<<"The minimum value is : "<< getmini(num, size)<<endl;

    return 0;
}