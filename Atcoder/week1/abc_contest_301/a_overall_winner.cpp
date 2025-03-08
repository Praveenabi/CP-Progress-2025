#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int t_wins = 0;
    int a_wins = 0;

    bool t_first = false;
    bool a_first = false;

    for(auto win: s)
    {
        if(win == 'T')
        t_wins++;
        else 
        a_wins++;

        if(t_wins > a_wins)
        {
            t_first = true;
            a_first = false;
        }
        
        else if(t_wins < a_wins)
        {
            a_first = true; 
            t_first = false;
        }   
    }

    if(t_wins > a_wins)
    cout<<"T\n";
    else if(t_wins < a_wins) 
    cout<<"A\n";
    else
        if(t_first)
        cout<<"T\n";
        else 
        cout<<"A\n";

    return 0;
}