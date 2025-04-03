#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,g,b;
    string c;
    cin>>r>>g>>b>>c;

    if(c == "Red") cout<<(g<b?g:b)<<"\n";
    else if(c == "Green") cout<<(r<b?r:b)<<"\n";
    else cout<<(r<g?r:g)<<"\n";


    return 0;
}