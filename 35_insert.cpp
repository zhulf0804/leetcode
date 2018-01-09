class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int index=0; index<nums.size(); index++){
            if(nums[index] >= target) return index;
        }
        return nums.size();
    }
};
