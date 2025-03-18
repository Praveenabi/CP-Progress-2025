#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    //! intiliaze two pointers pointing to edges of strings
    int left = 0;
    int right = s.length()-1;

    bool palindrome = true;

    //! until two pointers met each other, keep moving
    while(left < right)
    {
        if(s[left] != s[right])
        {
            palindrome = false;
            break;
        }
        else 
        {
            //! move pointers towards each other
            left++;
            right--;
        }
    }

    if(palindrome)
    cout<<"Palindrome\n";
    else 
    cout<<"Not a Palindrome\n";



    return 0;
}