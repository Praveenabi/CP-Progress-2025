#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int num_diff = 0;

        if(s[0] != 'c')
        num_diff++;
        if(s[1] != 'o')
        num_diff++;
        if(s[2] != 'd')
        num_diff++;
        if(s[3] != 'e')
        num_diff++;
        if(s[4] != 'f')
        num_diff++;
        if(s[5] != 'o')
        num_diff++;
        if(s[6] != 'r')
        num_diff++;
        if(s[7] != 'c')
        num_diff++;
        if(s[8] != 'e')
        num_diff++;
        if(s[9] != 's')
        num_diff++;

        cout<<num_diff<<"\n";
    }

    return 0;
}