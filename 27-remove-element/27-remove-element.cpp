class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int count =0 ;
        while(count<length)
        {
            if(nums[count]==val)
            {
                nums[count]= nums[length-1];
                length--;
            }
            else
                count++;
        }
        return length;

    }
};