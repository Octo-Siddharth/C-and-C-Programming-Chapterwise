#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int n;
    cout<<"Enter the number : ";
    cin>>n;
    unsigned long long int ans = 0, i = 0;
    if(n < 0)
    {
        n = pow(2, 16) + n;
    }
    cout<< n << endl;
    while(n)
    {
        int lastbit = n & 1;
        ans = (pow(10, i) * lastbit) + ans;
        n = n >> 1;
        i++;
        cout << ans << endl;

    }
    cout << ans << endl;
    return 0;
}