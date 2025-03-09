#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    long long  a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool gp = true;


    for(int i= 2; i < n; i++)
    {
        long long b2 = a[i-1] * a[i-1];
        long long b1 = a[i-2];

        if(b2 != b1* a[i])
        {
            gp = false;
            break;
        }
    }
    

    

    if(gp)
    cout<<"Yes\n";
    else 
    cout<<"No\n";
    
    return 0;
}