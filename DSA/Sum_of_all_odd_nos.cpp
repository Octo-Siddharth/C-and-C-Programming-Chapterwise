//program to print the sum of all odd number

#include<iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout<<"Enter the number upto which the sum has to be find : ";
    cin>>n;
    while(i <= n)
    {
        if(i % 2 != 0)
           sum = sum + i;
        i = i + 1;   

    }
    cout<<"The sum from "<< 1 <<" to "<< n <<" is = "<< sum <<endl;
    return 0;
}