#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[1001];
    for(int i = 0; i < n; i++)
    cin>>a[i];

    uint64_t ans = 1;

    for(int i = 0; i < n;  i++)
    ans= (ans*a[i])%1000000007;

    cout<<ans<<"\n";

    return 0;
}