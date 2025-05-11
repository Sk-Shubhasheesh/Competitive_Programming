// https://leetcode.com/problems/missing-number/

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int x = 0;
            int n  = nums.size();
            for(int i=0; i<=n; i++){
                x^=i;
            }
            for(auto &i:nums){
                x^=i;
            }
            return x;
            
        }
    };