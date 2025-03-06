#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    bool biarrow = true;
    if(s[0]=='<' && s[s.length()-1] =='>')
    {
        for(int i = 1; i < s.length()-1; i++)
        {
            if(s[i] != '=')
            {
                biarrow = false;
                break;
            }
        }

        if(biarrow)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
    }
    else 
    cout<<"No\n";
    return 0;
}