#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string &str, int i, int j)
{
    if(i > j)
    {
        return 1;
    }
    if(str[i] != str[j])
    {
        return 0;
    }
    else
    {
        return isPalindrome(str, i + 1, j - 1);
    }

}
int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;

    bool ans = isPalindrome(str, 0, str.length()-1);

    if(ans)
    {
        cout<<"Its a palindrome !!";
    }
    else
    {
        cout<<"Its not a palindrome !!";
    }
}