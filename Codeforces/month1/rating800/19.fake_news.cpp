#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string t = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(t.empty() && s[i] =='h')
        t+=s[i];
        else if(t.length()==1 && s[i] == 'e')
        t+=s[i];
        else if(t.length()==2 && s[i] == 'i')
        t+=s[i];
        else if(t.length()==3 && s[i] == 'd')
        t+=s[i];
        else if(t.length()==4 && s[i] == 'i')
        t+=s[i];
    }

    if(t == "heidi")
    cout<<"YES\n";
    else 
    cout<<"NO\n";

    return 0;
}