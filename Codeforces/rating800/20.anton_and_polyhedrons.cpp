#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    int faces = 0;

    while(n--)
    {
        cin>>s;
        
        if(s == "Tetrahedron")
        faces+=4;
        if(s == "Cube")
        faces+=6;
        else if(s == "Octahedron")
        faces+=8; 
        else if(s == "Dodecahedron")
        faces+=12;
        else if(s == "Icosahedron")
        faces+=20;
    }

    cout<<faces<<"\n";

    return 0;
}