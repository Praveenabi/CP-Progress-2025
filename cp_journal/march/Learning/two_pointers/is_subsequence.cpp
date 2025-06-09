#include <bits/stdc++.h>

using namespace std;

int main()
{
    //! find t is subsequence of s
    string s,t;
    cin>>s>>t;

    //! initialize two pointers pointing to start index of both strings
    int i = 0, j = 0;

    while(i < s.length())
    {
        if(s[i] = t[j])
        {
            j++;
        }
        i++;
    }

    if(j == t.length())
    cout<<"Subsequence\n";
    else 
    cout<<"Not a Subsequence\n";

    return 0;
}