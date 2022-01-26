class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>s(rowIndex+1);

        for(int i=0;i<(rowIndex+1);i++)
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
        return s[rowIndex];

    }
};
