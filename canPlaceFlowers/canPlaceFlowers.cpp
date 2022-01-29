class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sum=0;
        if(flowerbed.size()==1 && flowerbed[0]==0)
            return true;
        for(int i=0;i<flowerbed.size();i++)
        {
            if(i-1>-1 && i+1<flowerbed.size() && flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0)
            {
                 sum++;
                 flowerbed[i]=1;
                 continue;
            }
            else if(i==0 && i+1<flowerbed.size() && flowerbed[i]==0 && flowerbed[i+1]==0)
            {
                 sum++;
                 flowerbed[i]=1;
                 continue;
            }
            else if(i-1>-1 && i==flowerbed.size()-1 && flowerbed[i]==0 && flowerbed[i-1]==0)
            {
                 sum++;
                 flowerbed[i]=1;
                 continue;
            }

        }
        if(sum>=n)
            return true;
        else
            return false;

    }
};
