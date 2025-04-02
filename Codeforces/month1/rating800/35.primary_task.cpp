#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;
    
    while(t--)
    {
        cin>>s;

        if(s.length()>3)
        {
            if(s[0]=='1' && s[1] == '0' && s[2] >48 )
            cout<<"Yes\n";
            else 
            cout<<"No\n";
        }
        else if(s.length() == 3)
        {
            if(s[0]=='1' && s[1] == '0' && s[2] >49 )
            cout<<"Yes\n";
            else 
            cout<<"No\n";
        }
        else 
        cout<<"No\n";
    }
    
    return 0;
}