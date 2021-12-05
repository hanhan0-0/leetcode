class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        int N=100000;
        int hasy[100000]={1000000};
        int a;
        for(int i=0;i<nums.size();i++)
        {
            a=nums[i];
            if(nums[i]<0)
                a=-nums[i];
            if(hasy[a%N]==nums[i])
                return true;
            hasy[a%N]=nums[i];
        }
         return false;
    
    }
};
