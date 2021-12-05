class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> a;
        int i,j;
         for(i=0;i<nums.size()-1;i++)
         {
             for( j=i+1;j<nums.size();j++)
             {
                 if(nums[i]+nums[j]==target)
                     {
                         a.push_back(i);
                         a.push_back(j);
                         break;
                     }
             }
             if(a.size()!=0)
                break;
         }
         return a;
    }
};
