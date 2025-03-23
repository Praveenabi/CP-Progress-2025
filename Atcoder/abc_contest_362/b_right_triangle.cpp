#include <bits/stdc++.h>

using namespace std;

int main()
{
    int xa,xb,xc,ya,yb,yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;

    int a = pow((xa-xb),2) + pow((ya-yb), 2);
    int b = pow((xb-xc),2) + pow((yb-yc), 2);
    int c = pow((xc-xa),2) + pow((yc-ya), 2);

    if((a == b + c) || (b == a + c) || (c == a + b))
    cout<<"Yes\n";
    else 
    cout<<"No\n";
    
    return 0;
}