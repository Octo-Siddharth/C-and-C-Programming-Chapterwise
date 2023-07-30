#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, t1 = 0, s = 0, k, t2 = 0;
        cin >> n;
        int arr[100];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                t1++;
            }
            else
            {
                t2++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (t1 > t2)
            {
                if (arr[i] % 2 != 0)
                {
                    k = i;
                }
            }
            else
            {
                if (arr[i] % 2 == 0)
                {
                    k = i;
                }
            }
        }
        cout << k << endl;
    }
}