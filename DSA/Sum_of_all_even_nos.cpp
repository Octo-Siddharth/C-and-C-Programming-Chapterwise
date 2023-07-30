//program to print all the sum of even numbers
#include<iostream>

using namespace std;

int main()
{
    int n, i = 2, sum = 0;
    cout<<"Enter the number upto which we need to find the sum : ";
    cin>>n;
    while(i <= n)
    {
        if(i % 2 == 0)
           sum = sum + i;
        i = i + 1;   
    }
    cout<<"The sum of numbers from "<< 1 <<" to "<< n << " is = "<< sum <<endl;
    return 0;

}