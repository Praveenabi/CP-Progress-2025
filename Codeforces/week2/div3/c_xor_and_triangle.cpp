#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x;

        bool y_exsits= false;
        y = x-1;
        while(y>0)
        {
            int  z = x ^ y;

            if((x+y > z) && (x+z >y) && (y+z>x))
            {
                y_exsits = true;
                break;
            }
            else 
            y--;
        }

        if(y_exsits)
        cout<<y<<"\n";
        else 
        cout<<-1<<"\n";
    }
    
    return 0;
}