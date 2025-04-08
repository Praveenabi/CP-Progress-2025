#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        uint64_t x,k; cin>>x>>k;

        int factors = 0;

        if(x%2 == 0 && x!=2)
        {
            cout<<"No\n";
        }
        else if(x==2)
        {
            if(k >1)
            cout<<"No\n";
            else 
            cout<<"Yes\n";
        }
        else 
        {
            for(int i = 1; i <= x; i++)
            {
                if(x%i == 0)
                factors++;
            }

            if(factors == 2 && k == 1) cout<<"Yes\n";
            else cout<<"No\n";
        }


        

        

    }


    return 0;
}