#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] < 97)
        s1[i] +=32;
    }

    for(int i = 0; i < s2.length(); i++)
    {
        if(s2[i] < 97)
        s2[i] +=32;
    }

    int comp = s1.compare(s2);

    if(comp >1)
    cout<<"1\n";
    else if(comp < -1)
    cout<<"-1\n";
    else 
    cout<<comp<<"\n";
    return 0;
}