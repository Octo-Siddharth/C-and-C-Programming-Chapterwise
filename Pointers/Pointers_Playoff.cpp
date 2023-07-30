#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num ;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"The number is : "<< num <<endl;
    int *ptr = &num;
    (*ptr)++;
    cout<<"The output is : "<< num << endl;

    int num2 ;
    cout<<"Enter the number : ";
    cin>>num2;
    int a = num2;
    cout<<"a before : "<< num2 << endl;
    ++a;
    cout<<"a after : "<< num2 << endl;

    int *p = &num2;
    cout<<"a before : "<< num2 << endl;
    (*p)++;
    cout<<"a after : "<< num2 << endl;

    cout<<"_____________________________"<<endl;

    //Copying values of pointer

    int *q = p;
    cout<< p <<" - "<< q << endl;
    cout<< *p <<" - "<< *q << endl;
    cout<< &p <<" - "<< &q << endl; //will pont the the next address

    cout<<"_____________________________"<<endl;
    int i;
    cout<<"Enter the number : ";
    cin>>i;
    int *t = &i;

    *t = *t + 1;
    cout<<"The output is : "<< *t <<endl;
    cout<<"Before t : "<< t << endl;
    t = t + 1;
    cout<<"After t : "<< t << endl;
}