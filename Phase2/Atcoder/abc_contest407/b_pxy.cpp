#include<bits/stdc++.h>
using namespace std;

int sum[6][6] = {
    {2, 3, 4, 5, 6, 7},
    {3, 4, 5, 6, 7, 8},
    {4, 5, 6, 7, 8, 9},
    {5, 6, 7, 8, 9, 10},
    {6, 7, 8, 9, 10, 11},
    {7, 8, 9, 10, 11, 12},
};
int diff[6][6] = {
    {0, 1, 2, 3, 4, 5},
    {1, 0, 1, 2, 3, 4},
    {2, 1, 0, 1, 2, 3},
    {3, 2, 1, 0, 1, 2},
    {4, 3, 2, 1, 0, 1},
    {5, 4, 3, 2, 1, 0},
};

int main()
{
    int x, y;
    cin >> x >> y;

    int nx = 0, ny = 0, xny = 0;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(sum[i][j] >= x) nx++;
            if(diff[i][j] >= y) ny++;
            if(sum[i][j] >= x && diff[i][j] >= y) xny++;
        }
    }

    double ans = (double)(nx + ny - xny)/(double)36.0;

    printf("%.10f\n", ans);


    return 0;
}