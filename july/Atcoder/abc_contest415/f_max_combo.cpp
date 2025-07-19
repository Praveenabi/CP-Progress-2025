#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q; cin>>n>>q;
    string s; cin>>s;

    while(q--)
    {
        int x,y,z; cin>>x>>y>>z;

        if(x == 1) s[y] = char(z);
        else 
        {
            int ans = 1;
            int left = 0, right = 1;

            int max  = 0;
            while((left>=0 && left <n) && (right>=0 && right<n))
            {
                if(s[left] == s[right])
                {
                    max++;
                    right++;
                }
                else
                {
                    left++;
                    right++;
                    if(max > ans) ans= max;
                    max = 0;
                }
            }
            cout<<ans<<"\n";
        }
    }


    return 0;
}