#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x;
    cin>>x;

    if(x >= 38.0F)
    cout<<"1\n";
    else if(x < 38.0F && x >= 37.5F)
    cout<<"2\n";
    else 
    cout<<"3\n";

    return 0;
}