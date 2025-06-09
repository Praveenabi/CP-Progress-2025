#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    for(int i = 0; i < 100; i++)
    {
        s.push(0);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a;
        if(a==1)
        cin>>b;

        if(a == 1)
        {
            s.push(b);
        }
        else 
        {
            cout<<s.top()<<"\n";
            s.pop();
        }
    }

    return 0;
}