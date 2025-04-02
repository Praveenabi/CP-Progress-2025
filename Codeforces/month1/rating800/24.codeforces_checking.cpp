#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>c;
        switch (c)
        {
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'o':
        case 'r':
        case 's':
            cout<<"YES\n";
            break;
        default:
            cout<<"NO\n";
            break;
        }
    }

    return 0;
}