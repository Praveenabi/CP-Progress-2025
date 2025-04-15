#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n; cin >>n;
        string s; cin >>s;

        if(n <= 3)
        {
            cout<<"Yes\n";
        }
        else 
        {
            int left = 0, right = 3;

            bool ans = false;

            while(left < n && right < n)
            {
                int consonats_count = 0;

                for(int i  = left; i <=right; i++)
                {
                    if(s[i]!= 'a' && s[i]!= 'e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
                    {
                        consonats_count++;
                    }
                }

                if(consonats_count == 4)
                {
                    ans = true;
                    break;
                }
                else 
                {
                    left++;
                    right++;
                }
            }

            if(ans) cout<<"No\n";
            else cout<<"Yes\n";
        }

        
    }

    return 0;
}