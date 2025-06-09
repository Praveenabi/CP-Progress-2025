#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int mask[200] = {0};

    int num_dist = 0;

    for(int i = 0; i < s.length(); i++)
    {
        int index = s[i];
        if(mask[index] != 1)
        {
            mask[index] = 1;
            num_dist++;
        }
    }

    if(num_dist %2 == 0)
    cout<<"CHAT WITH HER!\n";
    else 
    cout<<"IGNORE HIM!\n";

    return 0;
}