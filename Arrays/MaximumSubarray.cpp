class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        int ans = INT_MIN;
        for(int i = 0; i < len; i++)
        {
            sum = sum + nums[i];
            ans = max(ans, sum);
            if(sum < 0)
                sum = 0;
        }
        return ans;
    }
};
