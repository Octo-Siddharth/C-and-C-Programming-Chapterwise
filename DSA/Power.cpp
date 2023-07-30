#include <iostream>

using namespace std;

int power(int n, int num)
{
    int ans = 1;
    for(int i = 1; i <= num; i++)
    {
        ans = ans * n;
    }
    return ans;
}

int main()
{
    int n1, n2;
    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"Enter number 2 : ";
    cin>>n2;

    cout<<"Answer is : "<<power(n1, n2)<<endl;

    return 0;
}