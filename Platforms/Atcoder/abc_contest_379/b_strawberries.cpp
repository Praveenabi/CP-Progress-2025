#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;

    int num_s = 0;
    for(int i = 0; i <= n-k; i++)
    {
        bool ht = true;
        for(int j = i; j < i+k; j++)
        {
            if(s[j] != 'O')
            {
                ht = false;
                break;
            }
        }

        if(ht)
        {
            num_s++;
            i +=k-1;
        }
        
    }

    cout<<num_s<<"\n";
    
    return 0;
}