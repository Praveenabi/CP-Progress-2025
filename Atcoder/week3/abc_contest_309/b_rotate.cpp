#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //! right shift 1st row
    int t = a[0][0];
    for(int i = 1; i < n; i++)
    {
        int t1 = a[0][i];
        a[0][i]  = t;
        t = t1;
    }
    
    //! right shift Nth column
    for(int i = 1; i < n; i++)
    {
        int t1 = a[i][n-1];
        a[i][n-1] = t;
        t = t1;
    }

    //! left shift the Nth row
    for(int i = n-2; i >= 0; i--)
    {
        int t1 = a[n-1][i];
        a[n-1][i] = t;
        t = t1;
    }

    //! left shift the 1st column
    for(int i = n-2; i >= 0; i--)
    {
        int t1 = a[i][0];
        a[i][0] = t;
        t = t1;
    }


    for(int i = 0;  i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<a[i][j];
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;
}