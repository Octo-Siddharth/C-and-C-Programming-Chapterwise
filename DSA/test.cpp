#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
      void solve(int N, vector<int> &A, vector<long long> &V, vector<long long> &suff)
      {
        priority_queue<int, vector<int>, greater<int>> priority_q_1;
        priority_queue<int> priority_q_2;
        long long ans = 0;
        for(int i = 0;i < 2*N; i++){
            ans+=A[i];
            priority_q_1.push(A[i]);
            if(i < N-1) 
            {
                continue;
            }
            if(i == N-1) 
            {
                V[i] = ans;
            }
            else if(i >= N)
            {
                ans = ans - priority_q_1.top();
                priority_q_1.pop();
                V[i] = ans;
            }
        }
        ans = 0;
        for(int i=3*N-1;i>=N;i--)
        {
            ans= ans + A[i];
            priority_q_2.push(A[i]);
            if(i>2*N) 
            {
                continue;
            }
            if(i == 2*N) 
            {
                suff[i] = ans;
            }
            else if(i <= 2*N-1)
            {
                ans = ans - priority_q_2.top();
                priority_q_2.pop();
                suff[i] = ans;
            }
        }
    }
    long long colosseum(int N,vector<int> A) {
        vector<long long> V(3*N, 0), suff(3*N, 0);
        solve(N, A, V, suff);
        long long result = INT_MIN;
        for(int i=N-1;i<2*N;i++)
        result = max(result, V[i]-suff[i+1]);
        return result;
   }
};