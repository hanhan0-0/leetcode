class Solution {
public:
    int maxmiumScore(vector<int>& cards, int cnt) {
        sort(cards.begin(),cards.end());
        int sum=0;
        for(int j=cards.size()-1;j>cards.size()-cnt;j--)
            sum=cards[j]+sum;
        for(int i=cards.size()-cnt;i>-1;i--)
        {
            if((sum+cards[i])%2==0)
               return sum+cards[i];
        }
        return 0;

    }
};
