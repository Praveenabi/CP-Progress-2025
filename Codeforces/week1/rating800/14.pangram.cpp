#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;

    int bitset[200] = {0};
    int pangram = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]>=92)
        {
            int index = s[i];
            if(bitset[index] != 1)
            {
                bitset[index]      = 1;
                bitset[index - 32] = 1;
                pangram++;
            }
        }
        else 
        {
            int index = s[i];
            if(bitset[index] != 1)
            {
                bitset[index]      = 1;
                bitset[index + 32] = 1;
                pangram++;
            }
        }
    }

    if(pangram == 26)
    cout<<"YES\n";
    else 
    cout<<"NO\n";

    return 0;
}