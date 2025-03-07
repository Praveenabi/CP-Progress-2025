#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    if(s3.length() == (s1.length()+ s2.length()))
    {
        string t = s1+s2;
        sort(t.begin(),t.end());
        sort(s3.begin(),s3.end());
        if(s3 == t)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
    else 
    cout<<"NO\n";

    return 0;
}