#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;

    bool same_str = true;
    if(s.length() != t.length())
    same_str = false;
    else 
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != t[t.length()-1-i])
        {
            same_str = false;
            break;
        }
    }

    if(same_str)
    cout<<"YES\n";
    else 
    cout<<"NO\n";

    return 0;
}