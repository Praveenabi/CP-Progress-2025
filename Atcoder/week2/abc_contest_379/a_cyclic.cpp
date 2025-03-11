#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int c = n%10;
    n/=10;
    int b = n%10;
    n/=10;
    int a = n%10;

    string bca = to_string(b) + to_string(c) + to_string(a);
    string cab = to_string(c) + to_string(a) + to_string(b); 
    cout<<bca<<" "<<cab<<"\n";

    
    return 0;
}