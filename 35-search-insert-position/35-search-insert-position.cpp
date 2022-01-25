class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]) return 0;
        else if(target>nums[nums.size()-1]) return nums.size();
        else
        {
            int low = 0;
            int high = nums.size()-1;
            
            while(low<=high)
            {
                int mid = low + (high-low)/2;
                if(target == nums[mid])
                    return mid;
                else if (target> nums[mid])
                    low=mid+1;
                else high = mid-1;
            }
            return low;
        }
        
    }
};