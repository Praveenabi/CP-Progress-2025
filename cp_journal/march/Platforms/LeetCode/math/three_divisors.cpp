class Solution {
    public:
        bool isThree(int n) {
            int factors = 0;
    
            for(int i = 1; i <= n; i++)
            {
                if(n%i==0) factors++;
            }
    
            return factors==3;
        }
    };