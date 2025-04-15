#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;

    vector<int> d(n); 

    for(int i = 1; i <n; i++) cin>>d[i];

    int a,b; cin >>a>>b;

    int ans = 0;

    for(int i = 1; i < n; i++)
    {
        if(i > a -1 && i <= b-1)
        ans+=d[i];
    }

    cout<<ans<<"\n";


    return 0;
}