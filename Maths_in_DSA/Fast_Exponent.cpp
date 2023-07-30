#include<bits/stdc++.h>

using namespace std;
int fastExpo(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if(b&1)
        {
            result = result * a;
        }
        b = b/2;
        a = a * a;
    }
    return result; 
}
int main()
{
    int a, b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;

    cout<<"The Answer is : "<< fastExpo(a,b) <<endl;

    return 0;
}