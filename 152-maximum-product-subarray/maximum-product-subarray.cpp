class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = nums[0];
        int minP = nums[0];
        int ans = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(minP, maxP);
            }
            
            int temp = maxP; 
            maxP = max(nums[i], temp * nums[i]);
            minP = min(nums[i], minP * nums[i]);
            ans = max(ans, maxP);
        }
        return ans;
    }
};
