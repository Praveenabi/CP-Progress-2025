#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_problems = 0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c >=2)
        max_problems+=1;
    }

    cout<<max_problems<<"\n";

    return 0;
}