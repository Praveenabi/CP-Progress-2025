#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    bool _1122 = true;

    if(s.length()%2 != 0)
    {
        int mid_index = s.length()/2;
        for(int i = 0; i < mid_index; i++)
        {
            if(s[i] != '1' || s[mid_index+i+1] != '2' || s[mid_index] != '/')
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