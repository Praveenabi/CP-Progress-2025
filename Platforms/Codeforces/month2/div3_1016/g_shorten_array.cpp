#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n,k; cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];

        int ans = -1;

        for(int i  = 1; i <= n; i++)
        {
            for(int j = 0 ; j < n; j+=i)
            {
                for(int k = j; k<j+i; k++)
                {

                }
            }
        }
    }

    return 0;
}