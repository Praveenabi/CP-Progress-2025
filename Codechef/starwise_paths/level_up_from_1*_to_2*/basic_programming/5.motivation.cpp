#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x;
        cin>>n>>x;

        int s[n],r[n];

        for(int i = 0; i < n; i++)
        {
            cin>>s[i]>>r[i];
        }
        
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(r[i]>ans && s[i]<= x)
            ans = r[i];
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}