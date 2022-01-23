class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)
        return NULL;
        int sum=0;
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(sum>0)
               sum=sum+nums[i];
            if(sum<=0)
               sum=nums[i];
            ans=ans>sum?ans:sum;
        }
        return ans;
        
    }
};
