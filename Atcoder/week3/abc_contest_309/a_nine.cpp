#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    if(b-a == 1)
    {
        if(a+b == 7 || a + b == 13)
        cout<<"No\n";
        else 
        cout<<"Yes\n";
    }
    else 
    {
        cout<<"No\n";
    }
    
    return 0;
}