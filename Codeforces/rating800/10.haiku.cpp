#include <bits/stdc++.h>

using namespace std;

int countVowels(string& s)
{
    int num = 0;
    for(int i = 0; i< s.length(); i++)
    {
        switch(s[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            num++;
            break;
        }
    }
    return num;
}

int main()
{
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    int f_p_sy = countVowels(s1);
    int s_p_sy = countVowels(s2);
    int t_p_sy = countVowels(s3);

    if(f_p_sy == 5 && s_p_sy == 7 && t_p_sy == 5)
    {
        cout<<"YES\n";
    }
    else 
    {
        cout<<"NO\n";
    }

    return 0;
}