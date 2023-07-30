#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, result;
    int choise;
    do
    {
        cout<<"----------------------------------------"<<endl;
        cout<<"Addition"<<endl;
        cout<<"Subtraction"<<endl;
        cout<<"Multipilication"<<endl;
        cout<<"Division"<<endl;
        cout<<"Modulus"<<endl;
        cout<<"Power"<<endl;
        cout<<"Exit"<<endl;
        cout<<"----------------------------------------"<<endl;

        cout<<"Enter your choise(1-7) : ";
        cin>>choise;
        if(choise>=1 && choise<=6)
        {
            cout<<"Enter the first number  : ";
            cin>>a;
            cout<<"Enter the second number : ";
            cin>>b;
        }
        switch (choise)
        {
        case 1:
            result=a+b;
            cout<<"The Addition is : "<<result;
            cout<<"\n";
            break;
        case 2:
            result=a-b;
            cout<<"The Subtraction is : "<<result;
            cout<<"\n";
            break;
        case 3:
            result=a*b;
            cout<<"The Multiplication is : "<<result;
            cout<<"\n";
            break;
        case 4:
            result=a/b;
            cout<<"The Division is : "<<result;
            cout<<"\n";
            break;
        case 5:
            result=a%b;
            cout<<"The Modulus is : "<<result;
            cout<<"\n";
            break;
        case 6:
            result=pow(a,b);
            cout<<"The Power is : "<<result;
            cout<<"\n";
            break; 
        case 7:
            exit(0);  
        
        default:
            cout<<"You choise >>>>>!!"<<endl;
            break;
        }
        cout<<"----------------------------------------"<<endl;

    } while (choise != 7);
    cout<<endl;
    return 0;   
}