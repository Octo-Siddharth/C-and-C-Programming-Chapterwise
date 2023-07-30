#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, b = 1;
    cout<<"Enter the number of terms upto which the series to be printed : ";
    cin>>n;
    for(int i = 0; i<=n; i++)
    {
        int next_no;
        next_no = a + b;
        cout<<next_no<<" ";
        a = b;
        b = next_no;

    }
    cout<<a <<" "<<b <<" ";

}