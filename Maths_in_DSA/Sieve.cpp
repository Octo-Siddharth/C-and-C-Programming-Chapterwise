//Sieve of Eratosthenes application in prime number
#include<bits/stdc++.h>

using namespace std;
void sieve(bool prime[])
{
    for(int i = 2; i<=1000000; i++)
    {
        prime[i] = 1;
    }
    for(int i = 2; i<=1000000; i++)
    {
        if(prime[i])
        {
            for(int j = 2 * i; j<1000000; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    prime[0] = prime[1] = 0;
}
int main ()
{
    bool prime[1000001];
    sieve(prime);

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    while(n!=-1)
    {
        if(prime[n])
        {
            cout<<"It is a prime number !!";
        }
        else
        {
            cout<<"It is not a prime number !!";
        
        }
        cin>>n;
    }
    return 0;
}