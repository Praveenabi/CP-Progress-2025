#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=  0; i < n; i++) cin>>a[i];
    int x; cin>>x;

    bool ans = false;

    for(int i = 0; i < n; i++)
    {
        if(x == a[i])
        {
            ans = true;
            break;
        }
    }

    if(ans) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}