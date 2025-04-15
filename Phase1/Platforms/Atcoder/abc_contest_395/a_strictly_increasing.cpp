#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool isStrictlyIncreasing = true;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        a.emplace_back(t);
    }

    int t = a[0];

    for(int i = 1; i < n; i++)
    {
        if(t >= a[i])
        {
            isStrictlyIncreasing = false;
        }
        else 
        {
            t = a[i];
        }
    }

    if(isStrictlyIncreasing)
    cout<<"Yes\n";
    else 
    cout<<"No\n";

    return 0;
}