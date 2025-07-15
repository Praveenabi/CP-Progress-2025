#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;

    uint64_t* a = (uint64_t*)malloc(sizeof(uint64_t)*n);

    for(int i = 0; i <n; i++)
    cin>>a[i];

    bool ans = false;

    if(a[n-1]%10 == 0)
    {
        for(int i = n-2; i >=0; i--)
        {
            if(a[i]%10 != 0)
            {
                ans = true;
                break;
            }
        }
    }


    if(ans)
    cout<<"Yes\n";
    else 
    cout<<"No\n";


    return 0;
}