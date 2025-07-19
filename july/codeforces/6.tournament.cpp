#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,j,k; cin>>n>>j>>k;
        vector<int> a(n);
        int mx = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mx = max(mx,a[i]);
        }

        cout<<(k>1 || mx==a[j-1]?"Yes":"No")<<"\n";
    }

    return 0;
}