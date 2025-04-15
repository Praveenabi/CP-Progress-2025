#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a;
    while(n--)
    {
        int t;
        cin>>t;
        a.emplace_back(t);
    }

    int score = a[k-1];

    int num_contestant = 0;
    for(auto value: a)
    {
        if(value >=score && value != 0)
        num_contestant++;
    }

    cout<<num_contestant<<"\n";

    return 0;
}