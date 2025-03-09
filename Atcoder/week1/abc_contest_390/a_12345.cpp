#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];
    for(int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }

    int num_swap = 0;

    for(int i = 0 ; i < 4; i++)
    {
        if(a[i]>a[i+1])
        {
            int t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
            num_swap++;
        }
    }

    if(num_swap == 1)
    cout<<"Yes\n";
    else 
    cout<<"No\n";
    
    return 0;
}