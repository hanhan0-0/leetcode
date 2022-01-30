class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                x=nums[i];
                count++;
            }
            else
            {
                if(nums[i]==x)
                   count++;
                else
                   count--;
            }
        }
        count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==x)
               count++;
        }
        if(count>nums.size()/2)
            return x;
        else   
            return -1;

    }
};
