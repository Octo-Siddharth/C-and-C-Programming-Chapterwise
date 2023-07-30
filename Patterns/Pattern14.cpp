#include<iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin>>n;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<< ch <<" ";
            ch = ch + 1;
            j = j + 1;
        }
        cout<<"\n";
        i = i + 1; 
    }
    
}