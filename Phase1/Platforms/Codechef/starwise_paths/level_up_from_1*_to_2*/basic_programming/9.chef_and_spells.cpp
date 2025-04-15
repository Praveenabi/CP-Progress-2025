#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int x = a + b;
        int y = b + c;
        int z = a + c;

        cout<<max({x,y,z})<<"\n";
    }
    
    return 0;
}