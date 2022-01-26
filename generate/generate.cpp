class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>s(numRows);
        if(numRows==0)
            return s;
        for(int i=0;i<numRows;i++)
        {
            int j=0;
            while(j<(i+1))
            {
                if(j==0 || j==i)
                {
                    s[i].push_back(1);
                }
                else
                {
                    s[i].push_back(s[i-1][j-1]+s[i-1][j]);
                }
                j++;
            }
        }
        return s;

    }
};
