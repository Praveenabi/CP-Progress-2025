#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    uint64_t a[n];

    for(int i = 0; i < n; i++)
    cin>>a[i];

    uint64_t ans = 0;

    for(int i = 0; i < n-1; i++)
    {
        uint64_t sum = 0;

        for(int j = i+1; j < n; j++)
        {
            sum+=a[j];
        }

        ans+=sum*a[i];
    }

    cout<<ans<<"\n";

    return 0;
}