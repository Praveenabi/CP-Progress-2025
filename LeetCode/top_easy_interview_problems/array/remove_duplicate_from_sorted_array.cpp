class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            
            stack<int> s;
            
            for(int i = 0; i < nums.size(); i++)
            {
                if(s.empty()) s.push(nums[i]);
                else 
                {
                    if(s.top() != nums[i])
                    s.push(nums[i]);
                }
            }
            
            int k = s.size();
            
            for(int i = k -1; i>=0; i--)
            {
                nums[i] = s.top();
                s.pop();
            }
            
            return k;
        }
    };