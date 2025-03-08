#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    char pattern[N][N]{};

    for(int i = 0; i < N; i++)
    {
        int j = N  - i;
        if(i <= j)
        {
            for(int k = i; k < j; k++)
            {
                for(int l = i; l <j; l++)
                {
                    if(i%2==0)
                    {
                        pattern[k][l] = '#';
                    }
                    else 
                    {
                        pattern[k][l] = '.';
                    }
                }
            }
        }
        

    }
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<pattern[i][j];
        }
        printf("\n");
    }
    
    return 0;
}