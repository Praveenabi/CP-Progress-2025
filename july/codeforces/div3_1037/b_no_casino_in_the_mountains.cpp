#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int>a(n);
        for(int i = 0; i < n; i++) cin>>a[i];

        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            for(int j = i; j <=i+k-1; j++)
            {
                sum+=a[j];
            }

            if(sum==0)
            {
                ans++;
                i+=k;
            }
        }

        cout<<ans<<"\n";
    }


    return 0;
}