#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    vector<int> b;

    for(int i=0; i <n; i++)
    {
        cin>>a[i];
    }

    for(int i = 0; i < n-1; i++)
    {
        b.emplace_back(a[i]);
        int t1 = a[i];
        int t2 = a[i+1];

        while(abs(t1-t2) != 1)
        {
            if(t1 < t2)
            {
                t1++;
                b.emplace_back(t1);
            }
            else if(t1 > t2)
            {
                t1--;
                b.emplace_back(t1);
            }
        }
    }

    b.emplace_back(a[n-1]);

    for(auto value:b)
    cout<<value<<" ";

    return 0;
}