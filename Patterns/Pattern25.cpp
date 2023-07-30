// The pattern of pattern
#include<iostream>

using namespace std;

int main()
{
    int n, i = 1;
    cin>>n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout<< j <<" ";
            j = j + 1;
        }
        j = 1;
        while (j <= (i - 1)*2)
        {
            cout<<"* ";
            j = j + 1;
        }
        j = n - i + 1;
        while (j >= 1)
        {
            cout<< j << " ";
            j = j - 1;
        }
        cout<<"\n";
        i = i + 1;
    }
return 0;
}