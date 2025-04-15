#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;

    bool catchInsect = false;
    int g_index = -1;
    
    //! find where grasshoper
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'G')
        {
            g_index = i;
            break;
        }
    }

    //! find insect by moving left 
    for(int i = g_index; i < s.length(); i+=k)
    {
        if((i +k) < s.length() && s[i+k] == 'T')
        {
            catchInsect = true;
            break;
        }
        else if(s[i+k] == '#')
        {
            break;
        }
    }

    if(!catchInsect)
    {
        for(int i = g_index; i > 0; i-=k)
        {
            if((i - k) >= 0  && s[i-k] == 'T')
            {
                catchInsect = true;
                break;
            }
            else if(s[i-k] == '#')
            {
                break;
            }
        }
    }

    if(catchInsect)
    cout<<"YES\n";
    else 
    cout<<"NO\n";


    return 0;
}