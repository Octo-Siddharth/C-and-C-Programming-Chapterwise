//Dynamic Programming for Fibonnaci Series memoisation soln
#include<bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> &dp)
{
    //Base case
    if(n <= 1)
    {
        return n;
    }
    //Step 2 Check if already calculated or not
    if(dp[n] != -1)
    {
        return dp[n];
    }
    //Step 3
    return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);  
}

int main()
{
    int n = 5;
    vector<int> dp(n+1, -1);
    cout<<solve(n, dp); 
    return 0;
}

//T.C -> O(n) S.C -> O(n) 