#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int num1 = 0, num2 = 0,num3 = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1')
        num1++;
        else if(s[i] == '2')
        num2++;
        else if(s[i] == '3')
        num3++;
    }

    string t = "";
    for(int i = 0; i < num1; i++)
    t = t + "1+";

    for(int i = 0; i < num2; i++)
    t = t + "2+";

    for(int i = 0; i < num3; i++)
    t = t + "3+";

    t.pop_back();

    cout<<t<<"\n";

    return 0;
}