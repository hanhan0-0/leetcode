class Solution {
public:
    int reverse(int x) {
    long a=0;
    while(x!=0)
    {
        a=x%10+a*10;
        x=x/10;
    }
    if(2147483647<a || a<-2147483648)
        return 0;
    return (int)a;
    }
};
