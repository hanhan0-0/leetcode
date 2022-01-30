class Solution {
public:
    int maximum(int a, int b) {
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);
        sort(ans.begin(),ans.end());
        return ans[1];

    }
};
