#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int num_char = 0;

    if(s.length()%2 != 0)
    {
        if(s[s.length()-1] =='i')
        {
            s.append(1,'o');
            num_char+=1;
        }
        else 
        {
            s.insert(s.length()-1, "io");
            num_char+=1;
        }
    }

    
    for(int i = 0; i < s.length()-1; i+=2)
    {
        if(s[i]== 'i' && s[i+1] == 'o')
        continue;
        else
        num_char+=2;
    }

    cout<<num_char<<"\n";
    
    return 0;
}