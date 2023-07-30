#include<iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin>>n;
    while(i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout<<" ";
            space = space + 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout<<"*";
            j = j + 1;
        }
        cout<<"\n";
        i = i + 1;  
    }
}
