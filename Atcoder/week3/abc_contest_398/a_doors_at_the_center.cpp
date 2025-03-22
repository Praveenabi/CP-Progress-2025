#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;

    for(int i = 0; i < n; i++)
    {

        if(i == n/2)
        s+="=";
        else if(n %2 == 0 && i == n/2 -1)
        s+="=";
        else 
        s+="-";
    }

    cout<<s<<"\n";
    
    return 0;
}