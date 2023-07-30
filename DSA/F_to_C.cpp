//Program to convert temperature from celcius to fahrenheit 

#include<iostream>
using namespace std;

int main()
{
    float f, c;
    cout<<"Enter the temperature : ";
    cin>>f;
    c = (5.0/9) * (f - 32);
    cout<<f<< " F = " << c <<" C"<<endl;
    return 0;

}

