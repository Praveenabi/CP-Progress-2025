#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    map<int,int> m1;

    for(int i = 0; i < n; i++)
    {
        if(m1.count(a[i]))
        m1[a[i]]+=1;
        else 
        m1[a[i]]=1;
    }
    int ans = 0;

    if(m1.size() >= m)
    {
        for(int i = n-1; i >=0; i--)
        {
            m1[a[i]]-=1;
            ans++;

            if(m1[a[i]] == 0)
            break;
        }
    }
    

    cout<<ans<<"\n";


    return 0;
}