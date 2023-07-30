#include<iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin>>n;
    int c = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<< c <<" ";
            c = c + 1;
            j = j + 1;
        }
        cout<<"\n";
        i = i + 1;
        
    }
    
}