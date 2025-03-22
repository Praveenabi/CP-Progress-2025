#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[7];

    for(int i = 0; i < 7; i++)
    cin>>a[i];

    map<int,int> m;

    for(int i = 0; i < 7; i++)
    {
        if(m.count(a[i]) == 0)
        m[a[i]] = 1;
        else 
        m[a[i]] +=1;
    }

    int num2 = 0;
    int num3 = 0;

    if(m.size() > 1 && m.size() <= 4)
    {
        for(auto it = m.begin(); it != m.end(); it++)
        {
            if(it->second >= 2 && it->second <= 4)
            num2++;
            if(it->second >= 3 && it->second <= 5)
            num3++;
        }
    }

    
    if(num2 >= 1 && num3 >=1)
    cout<<"Yes\n";
    else 
    cout<<"No\n";
    
    return 0;
}