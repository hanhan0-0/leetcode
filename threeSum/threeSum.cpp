class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int> > answer;
        if (nums.size() < 3)
            return answer;
        sort(nums.begin(), nums.end());
        if(nums[0]>0)
            return answer;
        int before;
        int left, right;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                break;
            if (nums[i] == before)
                continue;
            left = i + 1;
            right = nums.size() - 1;
            while (left < right)
            {
                if (nums[i] + nums[left] + nums[right] == 0)
                {
                    answer.push_back({ nums[i], nums[left], nums[right] });
                    while (left < right && nums[left] == nums[left + 1]  )
                        left++;
                    while ( left < right && nums[right] == nums[right - 1]  )
                        right--;
                    left++;
                    right--;
                }
                else if (nums[i] + nums[left] + nums[right] < 0)
                {
                    left++;
                }
                else if (nums[i] + nums[left] + nums[right] > 0)
                {
                    right--;
                }
            }
            before = nums[i];
        }
        return answer;

    }


};
