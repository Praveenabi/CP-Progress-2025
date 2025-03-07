#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int num_low = 0;
    int num_upper = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 92)
        num_low++;
        else
        num_upper++;
    }

    if(num_low >=num_upper)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] < 97)
            s[i]+=32;
        }
    }
    else 
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 97)
            s[i]-=32;
        }
    }

    cout<<s<<"\n";

    return 0;
}