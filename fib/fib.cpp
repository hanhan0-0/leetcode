class Solution {
public:
    int fib(int n) {
        vector<int>F(n+1);
        for(int i=0;i<(n+1);i++)
        {
            if(i==0 || i==1)
                F[i]=i;
            else
            {
                F[i]=F[i-1]+F[i-2];
            }
        }
        return F[n];

    }
};
