#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int  n;
        cin>>n;

        string date = "01032025";

        char s[n];
        for(int i = 0; i < n; i++)
        cin>>s[i];

        int ans = -1;

        for(int i = 0 ; i < n; i++)
        {
            size_t index = date.find(s[i]);

            if(index != string::npos)
            date.erase(index,1);

            if(date.empty())
            {
                ans = i;
                break;
            }

        }

        cout<<ans + 1<<"\n";

    }
    
    return 0;
}