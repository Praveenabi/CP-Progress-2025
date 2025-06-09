#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        uint64_t maxT,maxN,maxS; cin>>maxT>>maxN>>maxS;

        uint64_t ans = 0;

        while(maxS > 0 && maxT--)
        {
            if(maxN <= maxS)
            {
                ans+=(maxN*maxN);
                maxS-= maxN;
            }
            else 
            {
                ans+=(maxS * maxS);
                maxS-=maxS;
            }
        }

        cout<<ans<<"\n";    
    }

    return 0;
}