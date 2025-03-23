#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    bool _1122 = true;

    map<char, int> mapS;

    if(s.length()%2 == 0)
    {
        
        for(int i = 0; i < s.length()/2; i++)
        {
            if(s[2*i] != s[2*i + 1])
            _1122 = false;
            else 
            {
                if(mapS.count(s[2*i]) == 0)
                mapS[s[2*i]] = 1;
                else 
                mapS[s[2*i]] +=1;
            }
        }

        for(auto it = mapS.begin(); it != mapS.end(); ++it)
        {
            if(it->second !=1)
            _1122 = false;
        }

        if(_1122)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
    }
    else 
    cout<<"No\n";


    return 0;
}