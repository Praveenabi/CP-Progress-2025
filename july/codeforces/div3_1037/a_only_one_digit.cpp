#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int a; cin>>a;
        
        int ans = a;
        while(a!=0)
        {
            auto rem = a%10;
            if(rem < ans) ans = rem;
            a = a/10;
        }

        cout<<ans<<"\n";
    }


    return 0;
}