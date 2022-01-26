class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum = 0;
        int MAX= INT_MIN;
        for(int i =0;i<nums.size();i++)
        {
            cur_sum+=nums[i];
            if(cur_sum>MAX)
                MAX = cur_sum;
            if(cur_sum < 0)
                cur_sum=0;
        }
        return MAX;
    }
};