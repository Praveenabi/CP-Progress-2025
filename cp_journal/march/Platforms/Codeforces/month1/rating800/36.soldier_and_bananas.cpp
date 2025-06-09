#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;

    int total_dol = k * (w*(w+1)/2);

    if(total_dol>n)
    cout<<total_dol-n<<"\n";
    else 
    cout<<"0\n";
    
    return 0;
}