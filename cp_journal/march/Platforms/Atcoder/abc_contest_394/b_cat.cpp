#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> s;
    for(int i = 0; i < n; i++)
    {
        string t;
        cin>>t;
        s.emplace_back(t);
    }
    
    //! sort the vector by non decreasing order of length  of string 
    //! sorting with lamda expression
    sort(s.begin(),s.end(),[](string a, string b)
                            {
                            return a.length() < b.length();
                            });

    for(auto c: s)
    cout<<c;
    printf("\n");

    return 0;
}