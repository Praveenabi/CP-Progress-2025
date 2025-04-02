#include <bits/stdc++.h>

using namespace std;

int main()
{
    long k2,k3,k5,k6; cin>>k2>>k3>>k5>>k6;

    long ans = 0;

    if(k5 <= k6)
    {
        if(k5 <= k2)
        {
            ans+=(256 * k5);
            k2 = k2 -k5;
        }
        else 
        {
            ans+=(256 * k2);
            k2 = 0;
        }   
    }
    else 
    {
        if(k6 <= k2)
        {
            ans+=(256 * k6);
            k2 = k2 -k6;
        }
        else 
        {
            ans+=(256 * k2);
            k2 = 0;
        } 
    }

    if(k2 <= k3)
    ans+=(32*k2);
    else 
    ans+=(32*k3);


    cout<<ans<<"\n";
}