class Solution {
public:
    bool isPalindrome(int x) {
        int b=x;
        if(x<0)
        return false;
        if(x<10)
        return true;
        long a=0;
        while(x!=0)
        {
            a=x%10+a*10;
            x=x/10;
        }
        if((int)a==b)
            return true;
        else
            return false;

    }
};
