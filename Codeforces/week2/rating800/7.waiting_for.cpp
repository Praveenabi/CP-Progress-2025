#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int total_people = 0;
    char c;
    int seats;
    while(n--)
    {
        cin>>c>>seats;
        if(c=='P')
        total_people+=seats;
        else
        {
            if(seats > total_people)
            {
                printf("Yes\n");
                total_people = 0;
            }
            else 
            {
                printf("No\n");
                total_people = total_people-seats;
            }
        }

    }
    
    return 0;
}