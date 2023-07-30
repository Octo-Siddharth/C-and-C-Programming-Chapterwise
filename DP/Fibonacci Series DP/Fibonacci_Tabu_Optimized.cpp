//Dynamic Programming for Fibonnaci Series Tabulation optimized soln
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;
    int prev = 1; //Remove vector or arr to save sapce
    int prev2 = 0;
    for(int i = 2; i<=n; i++) //iterate apart from the first two indexes
    {
        int curr_i = prev + prev2; //Set the dp[i] = dp[i-1] + dp[i-2] to this logic
        prev2 = prev; //Set the prev2 to prev
        prev = curr_i; // set prev to curr_i
    }
    cout<<prev;
}

//T.C -> O(n) S.C -> O(1)