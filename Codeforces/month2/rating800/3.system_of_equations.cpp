#include <bits/stdc++.h>

using namespace std;

int  main()
{
    int n,m; cin>>n>>m;

    int ans = 0;

    int size = n > m ? n:m;

    for(int i = 0; i <= size; i++)
    {
        for(int j = 0; j <= size; j++)
        {
            int eq1 = pow(i,2) + j;
            int eq2 = i + pow(j,2);

            if(eq1 == n && eq2 == m)
            ans++;
        }
    }

    cout<<ans<<"\n";
}