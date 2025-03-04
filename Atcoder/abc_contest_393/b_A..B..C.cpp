#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int len = s.length();

    int triples = 0;

    for(int i = 0; i < len; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            for(int k = j+1; k < len; k++)
            {
                if((j-i == k-j) && s[i]=='A' && s[j]=='B' && s[k] =='C')
                triples++;
            }
        }
    }

    cout<<triples<<"\n";

    return 0;
}