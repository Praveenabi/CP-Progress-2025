#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int first_b = -1;
        int last_b  = -1;


        for(int i = 0; i < s.length(); i++)
        {
            if(s[i]== 'B')
            {
                if(first_b == -1)
                {
                    first_b = i;
                    last_b = i;
                }
                else 
                last_b = i;
            }
        }
        
        cout<<last_b-first_b+1<<"\n";

    }


    return 0;
}