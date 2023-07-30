#include <iostream>

using namespace std;

bool isEven(int n)
{
    if(n&1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cout<<"Enter a number to check even or odd : ";
    cin>>num;

    if(isEven(num))
    {
        cout<<"Number is an even number !!"<<endl;
    }
    else
    {
        cout<<"Number is a odd number !!"<<endl;
    }
}