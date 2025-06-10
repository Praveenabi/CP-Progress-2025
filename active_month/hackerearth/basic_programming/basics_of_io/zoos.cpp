#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int num_zs = 0, num_os = 0;

    for(int i  = 0; i < s.size(); i++)
    {
        if(s[i] == 'z')
            num_zs++;
        else if(s[i] == 'o')
            num_os++;
    }

    if(num_os == 2 * num_zs)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}