#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin>>s;

    vector<int> indices;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '#') indices.emplace_back(i+1);
    }

    for(int i= 0; i < indices.size(); i+=2)
    {
        cout<<indices[i]<<","<<indices[i+1]<<"\n";
    }



    return 0;
}