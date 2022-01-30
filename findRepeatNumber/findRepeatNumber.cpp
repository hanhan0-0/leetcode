class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i+1<nums.size() && nums[i]==nums[i+1])
                return nums[i];
        }
        return NULL;

    }
};
