#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a[m];
    int b[n] = {0};

    for(int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);

    if(n == m)
    {
        cout<<"0\n\n";
    }
    else 
    { 
        for(int i = 0; i < m; i++)
        {
            int index = a[i];
            b[index -1] = 1;
        }

        cout<<n-m<<"\n";
        for(int i = 0; i < n; i++)
        {
            if(b[i] == 0)
            cout<<i+1<<" ";
        }
    }


    return 0;
}