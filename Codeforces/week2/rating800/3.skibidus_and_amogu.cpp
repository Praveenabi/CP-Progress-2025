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

        for(int i = 0; i<s.length()-2; i++)
        cout<<s[i];
        cout<<"i\n";
    }
    
    return 0;
}