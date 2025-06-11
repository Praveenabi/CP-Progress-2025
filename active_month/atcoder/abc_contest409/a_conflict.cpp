#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;

    string T,A; cin>>T>>A;

    bool ans = false;

    for(int i = 0; i < n; i++)
    {
        if(T[i]=='o' && A[i]=='o')
        {
            ans = true;
            break;
        }

    }

    if(ans) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}