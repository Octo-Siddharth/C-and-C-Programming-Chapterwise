#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the first number  : "<<endl;
    cin>>a;
    cout<<"Enter the seconf number : "<<endl;
    cin>>b;
    cout<<"Enter the third number  : "<<endl;
    cin>>c;

    if (a >= b && a >= c)
        cout<<"The largest number is : "<< a;
    else if (b >= a && b >= c)
        cout<<"The largest number is : "<< b;
    else
        cout<<"The largest number is : "<< c;        

    return 0;
}


