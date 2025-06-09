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

        string s;

        for(int i = 0; i <n; i++)
        {
            if(k >= a[i])
            {
                s+='1';
                k = k - a[i];
            }
            else s+='0';
        }

        cout<<s<<"\n";

    }

    return 0;
}