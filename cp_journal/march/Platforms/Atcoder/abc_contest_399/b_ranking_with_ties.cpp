#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int p[n];
    int rank[n] = {-1};
    for(int i = 0; i < n; i++)
    cin>>p[i];

    int r = 1;

    int unranked = n;
    
    while(unranked != 0)
    {
        int cur_max  = -1;
        int k = 0;
        //! find max value
        for(int i = 0; i < n; i++)
        {
            if(cur_max < p[i])
            {
                cur_max = p[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(p[i] == cur_max)
            {
                rank[i] = r;
                p[i]    = -1;
                k++;
            }
        }

        r += k;
        unranked -=k;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d\n",rank[i]);
    }
    
    return 0;
}