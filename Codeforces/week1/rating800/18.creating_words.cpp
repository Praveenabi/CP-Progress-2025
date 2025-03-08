#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string a,b;

    while(t--)
    {
        cin>>a>>b;

        char t = a[0];
        a[0]   = b[0];
        b[0]   = t;
        cout<<a<<" "<<b<<"\n";
    }
    

    return 0;
}