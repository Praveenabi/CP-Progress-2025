#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if(s1 == "fine" && s2 == "fine")
    cout<<4;
    else if(s1 == "fine" && s2 == "sick")
    cout<<3;
    else if(s1 == "sick" && s2 == "fine")
    cout <<2;
    else 
    cout <<1;

    return 0;
}