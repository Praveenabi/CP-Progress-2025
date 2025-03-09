#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r;
    cin>>n>>r;

    int div[n], perf[n];


    for(int i = 0; i < n; i++)
    {
        cin>>div[i]>>perf[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(div[i]==1 & r >= 1600 & r<=2799)
        {
            r+= perf[i];
        }
        else if(div[i] == 2 & r >=1200 && r <= 2399)
        {
            r +=perf[i];
        }
    }

    cout<<r<<"\n";
    return 0;
}