#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>n>>s;

        int max_alphaSize = 97;
        
        for(int i = 0; i < n; i++)
        {
            if(max_alphaSize < s[i])
            max_alphaSize = s[i];
        }

        cout<<max_alphaSize-96<<"\n";
    }
    
    return 0;
}