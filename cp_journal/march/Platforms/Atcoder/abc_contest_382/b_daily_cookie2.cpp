#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;

    int curIndex = n-1;
    while(d != 0)
    {
        for(int i = curIndex; i >=0; i--)
        {
            if(s[i] == '@')
            {
                s[i] = '.';
                d--;
                curIndex = i;
                break;
            }
        }
    }

    cout<<s<<"\n";

    return 0;
}