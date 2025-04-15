#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i < n; i++)
    cin>>a[i];

    map<int,int> m;

    for(int i = 0; i < n; i++)
    {
        if(m.count(a[i]) == 0)
        m[a[i]] = 1;
        else 
        m[a[i]] +=1;
    }

    int large = 0;
    int index_of_large = -1;

    for(auto it = m.begin(); it != m.end(); ++it)
    {
        if(it->second == 1 && it->first > large)
        large = it->first;
    }

    if(large >= 1)
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] == large)
            index_of_large = i + 1;
        }
    }
    

    cout<<index_of_large<<"\n";
    

    return 0;
}