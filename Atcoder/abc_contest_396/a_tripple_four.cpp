#include <bits/stdc++.h>

using namespace std;

int  main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    bool tripple = false;

    for(int i = 0; i < n-2; i++)
    {
        if(a[i] == a[i+1] && a[i] == a[i+2])
        {
            tripple = true;
            break;
        }
    }

    if(tripple)
    cout<<"Yes\n";
    else 
    cout<<"No\n";



    return 0;
}