#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    bool loggedIn = false;
    int ans  = 0;
    while(n--)
    {
        string s; cin>>s;

        if(s == "private" && (!loggedIn )) ans++;
        else if( s == "login") loggedIn = true;
        else if (s == "logout") loggedIn = false;
    }

    cout<<ans<<"\n";
    return 0;
}