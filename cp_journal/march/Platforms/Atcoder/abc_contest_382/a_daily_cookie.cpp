#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;

    int empty = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '.')
        empty++;
    }

    cout<<empty+d<<"\n";

    return 0;
}