#include <bits/stdc++.h>

using namespace std;

//! unclean code
#if 0
int main()
{
    int t;
    cin>>t;

    int a,b,x;
    while(t--)
    {
        cin>>a>>b>>x;
        int num_years;
        int num_billion_needed = b-a;
        if(num_billion_needed > 0)
        {
            if(num_billion_needed % x == 0)
            {
                num_years = num_billion_needed / x ;
            } 
            else 
            {
                num_years = num_billion_needed / x + 1;
            }
        }
        else 
        {
            num_years = 0;
        }

        cout<<num_years<<"\n";
    }

    return 0;
}
#endif

//! clean code
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,x;
        cin>>a>>b>>x;

        int amt = b-a;

        //! ceil division
        int num_years = (amt + x - 1) /x;

        cout<<num_years<<"\n";
    }

    return 0;
}