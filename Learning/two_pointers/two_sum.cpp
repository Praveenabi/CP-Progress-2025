#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[8] = {1,2,4,6,8,9,14,15},target = 13;

    //! intialize two pointers pointing to edges of array 
    int i = 0;
    int j = 7; 

    bool twoSum = false;

    while( i < j)
    {
        int curr = a[i] + a[j];
        if(curr == target)
        {
            twoSum = true;
            break;
        }
        else 
        {
             
            if(curr > target)
            j--; //! sum is too high , so decrease value by moving left
            else 
            i++; //! sum is too small =, so increase value by moving right
        }
    }

    if(twoSum)
    cout<<"Found Pair\n";
    else 
    cout<<"No Pair Found\n";


    return 0;
}