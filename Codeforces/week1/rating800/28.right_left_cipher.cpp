#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>t;

    int index;
    bool even= false;

    if(t.length()%2 == 0)
    {
        index = t.length()/2 -1;
        even = true;
    } 
    else 
        index = t.length()/2;

    s+=t[index];

    for(int i =1; i <= index; i++)
    {
        s += t[index + i];
        s += t[index - i];
    }
    if(even)
    s += t[t.length()-1];

    cout<<s<<"\n";

    return 0;
}