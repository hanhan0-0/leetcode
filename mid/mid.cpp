class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
     {
        double num;
        if(nums2.size()==0)
        {
            if(nums1.size()==1)
                return nums1[0];
            if((nums1.size())%2==0)
            {
                num=(double)(nums1[nums1.size()/2]+nums1[nums1.size()/2-1])/2.0;
            }
            if((nums1.size())%2==1)
                 num=(double)nums1[nums1.size()/2];
            return num;
        }
        if(nums1.size()==0)
        {
            if(nums2.size()==1)
                return nums2[0];
            if((nums2.size())%2==0)
            {
                num=(double)(nums2[nums2.size()/2]+nums2[nums2.size()/2-1])/2.0;
            }
            if((nums2.size())%2==1)
            num=(double)nums2[nums2.size()/2];
            return num;
        }
        int i,j;
        i=j=0;
        int mid=(nums1.size()+nums2.size())/2;
        vector<int>nums;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<nums2[j])
                 nums.push_back(nums1[i++]);
            else if(nums1[i]>nums2[j])
                 nums.push_back(nums2[j++]); 
            else
             {
                nums.push_back(nums1[i++]);
                nums.push_back(nums2[j++]);
             }
        }
        while(j<nums2.size())
        {
            nums.push_back(nums2[j++]);
        }
        while(i<nums1.size())
        {
            nums.push_back(nums1[i++]);
        }
        if(nums.size()%2==0)
        {
            num=(double)(nums[mid]+nums[mid-1])/2.0;
        }
        if(nums.size()%2==1)
            num=(double)nums[mid];
        return num; 
    }
   
};
