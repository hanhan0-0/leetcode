class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area=0;
        int s;
        while(i<j)
        {
           if(height[i]<height[j])
           {
                s=(j-i)*(height[i]);
                i++;
           }
           else
           {
               s=(j-i)*(height[j]);
               j--;
           }
           area=area>s?area:s;
        }
        return area;

    }
};
