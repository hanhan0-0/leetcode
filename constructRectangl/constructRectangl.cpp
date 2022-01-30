class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans;
        for(int i=(int)sqrt(area);i>-1;i--)
        {
            if(area%i==0)
            {
                if(i<area/i)
                {
                    ans.push_back(area/i);
                    ans.push_back(i);
                }  
                else
                {
                    ans.push_back(i);
                    ans.push_back(area/i);
                }
                break;
            }
        }
        
        return ans;

    }
};
