class Solution {
    public:
        void reverseString(vector<char>& s) {
            
            //! two pointer technique and swapping 
            int i = 0;
            int j = s.size()-1;
            
            while(i!=j &&  j >= s.size()/2)
            {
                char t = s[i];
                s[i]   = s[j];
                s[j]   = t;
                i++;
                j--;
            }
        }
    };