#include<iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin>>n;
    while(i <= n)
    {
        char ch = 'A' + n - i;
        int j = 1;
        while (j <= i)
        {
            cout<< ch <<" ";
            ch = ch + 1;
            j = j + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
