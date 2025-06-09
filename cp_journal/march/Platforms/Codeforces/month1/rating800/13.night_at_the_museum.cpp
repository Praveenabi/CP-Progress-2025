#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int num_rot = 0;

    char curPtr = 'a';

    for(int i = 0; i < s.length(); i++)
    {
        int left_rot = 0;
        int right_rot = 0;

        if(s[i]>curPtr)
        right_rot = s[i]-curPtr;
        else
        right_rot = curPtr - s[i];
        left_rot  = 26 - right_rot;

        if(left_rot < right_rot)
        num_rot+=left_rot;
        else 
        num_rot+=right_rot;

        curPtr = s[i];
    }
    
    cout<<num_rot<<"\n";

    return 0;
}