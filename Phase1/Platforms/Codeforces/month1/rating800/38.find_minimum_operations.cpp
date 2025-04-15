#include <bits/stdc++.h>

using namespace std;

long long int iexp(int x, unsigned n)
{
    long long int p, y;
    y = 1; // Initialize result
    p = x; // and p.
    while(1)
    {
       if (n & 1) y = p*y; // If n is odd, mult by p.
       n = n >> 1;         // Position next bit of n.
       if (n == 0) return y; // If no more bits in n.
       p = p*p;            // Power for next bit of n.
    }
}

long long int getPow(long long int a, int n)
{
    int k = 1;
    long long int pow_value = 1;
    while(a > pow_value)
    {
        k++;
        pow_value = iexp(n, k);
    }

    if(pow_value > a) return iexp(n, k-1);
    else return pow_value;
}

int main()
{
    int t;
    long long int n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        int num_op = 0;

        if(n >= k && k != 1)
        {
            while(n != 0 && n >= k)
            {
                n = n - getPow(n, k);
                num_op++;
            }
            num_op +=n;
        }
        else 
        {
            num_op = n;
        }
       
        cout<<num_op<<"\n";
    }
    



    return 0;
}