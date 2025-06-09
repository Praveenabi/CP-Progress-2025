#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s1,s2,s3;

    while(t--)
    {
        cin>>s1>>s2>>s3;

        vector<string> a;
        a.push_back(s1);
        a.push_back(s2);
        a.push_back(s3);

        sort(a.begin(), a.end());

        for(int i = 0 ; i < 3; i++)
        {
            string t = a[i];
            if(t[0] + t[1] +t[2] != 198)
            {
                bool Afound{false};
                bool Bfound{false};
                bool Cfound{false};
    
                for(int j = 0 ; j < 3; j++)
                {
                    if(t[j] == 'A')
                    Afound = true;
                    else if(t[j] == 'B')
                    Bfound = true;
                    else if(t[j] == 'C')
                    Cfound = true;
                }
    
                if(!Afound)
                cout<<"A\n";
                else if(!Bfound)
                cout<<"B\n";
                else if(!Cfound)
                cout<<"C\n";
            }
        }
    }


    return 0;
}