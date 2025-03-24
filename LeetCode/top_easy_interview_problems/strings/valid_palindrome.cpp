#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        bool isPalindrome(string s) {
            
            int index = 0; 

            //! remove non alphanumeric characters and convert uppercase char to lowercase
            while(s.empty() == false && index < s.size())
            {
                if(s[index]>=65 && s[index] <= 90)
                {
                    s[index]+=32;
                    index++;
                }
                else if((s[index]>=48 && s[index] <= 57) || (s[index]>=97 && s[index]<=122))
                {
                    index++;
                }
                else 
                {
                    s.erase(index,1);
                    index = index>1?index--:0;
                }
                
            }
            
            
            //! two pointer technique
            int i = 0;
            int j = s.empty()?0:s.size()-1;
            
            bool validPal = true;
            
            while(i!=j && j>=s.size()/2)
            {
                if(s[i]!=s[j])
                {
                    validPal = false;
                    break;
                }
                else 
                {
                    i++;
                    j--;
                }
            }
            return validPal;
        }
    };


int main()
{
    Solution sol = Solution();

    // bool valid = sol.isPalindrome("_");
    // bool valid = sol.isPalindrome("a.b,.");
    bool valid = sol.isPalindrome("\"Stop!\" nine myriad murmur. \"Put up rum, rum, dairymen, in pots.\"");
    

    if(valid)
    cout<<"Valid Palindrome\n";
    else 
    cout<<"Not a Valid Palindrome\n";
    return 0;
}