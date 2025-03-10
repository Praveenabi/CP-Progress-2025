#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;

        int first_1 = -1;
        int last_1  = -1;

        for(int i = 0; i <s.length(); i++)
        {
            if(s[i] == '1' && first_1 == -1)
            {
                first_1 = i;
                last_1  = i;
            }
            else if(s[i] == '1')
            last_1 = i;
        }

        int num_zeros = 0;

        for(int i = first_1; i <= last_1; i++)
        {
            if(s[i] == '0')
            num_zeros++;
        }

        cout<<num_zeros<<"\n";
    }
    
    return 0;
}