#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int decimal_index = 0;

    for(int i = 0 ; i < s.length(); i++)
    {
        if(s[i] == '.')
        {
            decimal_index = i;
            break;
        }
    }

    if(s[decimal_index-1] != '9')
    {
        for(int i = 0; i < decimal_index; i++)
        {
            if(i == decimal_index - 1)
            {
                if(s[decimal_index + 1] < '5')
                {
                    cout<<s[i];
                }
                else 
                {
                    cout<<char(s[i]+1);
                }
            }
            else
            {
                cout<<s[i];
            }
            
        }
        printf("\n");
    }
    else 
    {
        cout<<"GOTO Vasilisa.\n";
    }
    
    return 0;
}