//Prime number serching using function

#include<iostream>

using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
      
    }
    return 1;

}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(isPrime(n))
    {
        cout<<"It is a prime number!!";
    }
    else
    {
        cout<<"It is not a prime number !!";
    }
    return 0;
}