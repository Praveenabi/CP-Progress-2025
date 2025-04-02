#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

    string s[n];

    for(int i = 0; i < n; i++) cin>>s[i];

    int ans = 0;

    bool isSame;

    for(int i = 0; i < s[0].length(); i++)
    {
        
        isSame = true;

        for(int j = 1; j < n; j++)
        {
            if(s[j][i] != s[0][i])
            {
                isSame = false;
                break;
            }
        }

        if(isSame) ans++;
        else break;
    }

    cout<<ans<<"\n";

    return 0;
}