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

        if(s.length()%2 != 0)
        cout<<"NO\n";
        else 
        {
            bool squareString = true;
            int mid_index = s.length()/2;
            for(int i = 0; i < mid_index; i++)
            {
                if(s[i] != s[mid_index + i])
                squareString= false;
            }

            if(squareString)
            cout<<"YES\n";
            else 
            cout<<"NO\n";
        }
    }

    return 0;
}