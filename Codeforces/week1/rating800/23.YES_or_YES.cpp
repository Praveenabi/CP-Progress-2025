#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i]<92)
            {
                s[i] = s[i]+32;
            }
        }

        if(s == "yes")
        cout<<"YES\n";
        else 
        cout<<"NO\n";

    }

    return 0;
}