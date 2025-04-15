#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,d;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>d>>s;
        int index = -1;
        string tc = to_string(d);
        for(int i = 0; i < s.length(); i++)
        {
            if(tc[0] > s[i])
            {
                index = i;
                break;
            }
        }
        
        if(index != -1)
        s = s.insert(index, tc);
        else 
        s = s.append(tc);

        cout<<s<<"\n";
    }
    return 0;
}