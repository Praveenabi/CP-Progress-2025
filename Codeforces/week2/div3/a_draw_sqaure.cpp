#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,l,d,r,u;
    cin>>t;

    while(t--)
    {
        cin>>l>>r>>d>>u;
        if(l==r && r==d && d==u)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
    }
    
    return 0;
}