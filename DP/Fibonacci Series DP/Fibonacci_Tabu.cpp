////Dynamic Programming for Fibonnaci Series tabulation soln
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;
    vector<int> dp(n+1, -1); //Step 1 declare a dp of size n - 1
    dp[0] = 0; // Set iniial val to 0 and sec val of the index to 1
    dp[1] = 1;
    for(int i = 2 ; i<=n; i++) //Traverse excluding from the first 2
    {
        dp[i] = dp[i - 1] + dp[i - 2]; //Set relation
    }
    cout<<dp[n];
}

//T.C -> O(n) S.C -> O(n)