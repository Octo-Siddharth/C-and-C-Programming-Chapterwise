#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"The number is : "<< num <<endl;
    cout<<"The address is : "<< &num <<endl;
    
    int *ptr = &num;

    cout<<"The address is : "<< ptr <<endl;
    cout<<"The value is : "<< *ptr <<endl;

    cout<<"The size is : "<< sizeof(num) <<endl;
    cout<<"The size is : "<< sizeof(&num) <<endl;
    cout<<"The size is : "<< sizeof(ptr) <<endl;
    cout<<"The size is : "<< sizeof(*ptr) <<endl;

    cout<<"_______________________________________"<<endl;

    double num2;
    cout<<"Enter the number : ";
    cin>>num2;

    double *p = &num2;

    cout<<"The address is : "<< p <<endl;
    cout<<"The value is : "<< *p <<endl;

    cout<<"The size is : "<< sizeof(num2) <<endl;
    cout<<"The size is : "<< sizeof(&num2) <<endl;
    cout<<"The size is : "<< sizeof(p) <<endl;
    cout<<"The size is : "<< sizeof(*p) <<endl;
}