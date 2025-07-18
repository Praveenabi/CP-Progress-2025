#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[5][5];
    int cur_row = -1;
    int cur_col = -1;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin>>a[i][j];
            if(a[i][j])
            {
                cur_row = i+1;
                cur_col = j+1;
            }
        }
    }

    cout<<abs(3-cur_row) + abs(3-cur_col)<<"\n";


    return 0;
}