#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        string t;
        for(int i = 0; i < s.length(); i+=2)
        {
            t+=s[i];
        }

        t+=s[s.length()-1];

        cout<<t<<"\n";
    }


    return 0;
}