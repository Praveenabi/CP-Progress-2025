#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,s;
        cin>>n>>s;
        
        // int abs_diff;
        
        // if(n > s)
        // {
        //     abs_diff = s;
        // }
        // else 
        // {
        //     abs_diff = 2 * n - s;
        // }
        
        int abs_diff = min(s, 2*n -s);
         

        cout<<abs_diff<<"\n";

    }
    
    return 0;
}