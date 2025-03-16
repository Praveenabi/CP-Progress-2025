#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a,b,c;
    cin>>t;

    while(t--)
    {
        cin>>n>>a>>b>>c;
        int num_dist = 0;
        int num_days = 0;

        int max_dist = a + b + c;

        if(max_dist <= n)
        {
            num_days = (n / max_dist) * 3;
            n = n % max_dist;
        }

        if(a >= n && n != 0)
        num_days+=1;
        else if((a + b) >= n && n!= 0)
        num_days +=2;
        else if((a + b + c) >= n && n!= 0)
        num_days +=3;

        cout<<num_days<<"\n";
    }


    return 0;
}