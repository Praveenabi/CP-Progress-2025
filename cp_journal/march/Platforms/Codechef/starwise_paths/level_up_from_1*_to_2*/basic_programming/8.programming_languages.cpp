#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;

        if((a + b) == (a1 + b1) && (a == a1 || a == b1))
        cout<<"1\n";
        else if((a + b) == (a2 + b2) && (a == a2 || a == b2))
        cout<<"2\n";
        else 
        cout<<"0\n";
    }
    
    return 0;
}