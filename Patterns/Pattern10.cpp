#include<iostream>

using namespace std;

int main()
{
    int n , row = 1;
    cin>>n;
    while (row <= n)
    {
        int column = row;
        while (column < row * 2)
        {
            cout<< column <<" ";
            column = column + 1;
        }
        cout<<"\n";
        row = row + 1;
        
    }
    
}
