class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        int now=0;
        int next=0;
        
        for(int i=0;i<s.length();i++)
        {
            next=now;
            switch(s[s.length()-i-1])
            {
                case 'I':now=1;break;
                case 'V':now=5;break;
                case 'X':now=10;break;
                case 'L':now=50;break;
                case 'C':now=100;break;
                case 'D':now=500;break;
                case 'M':now=1000;break;
            }
            if(now<next)
                num=num-now;
            else
                num=num+now;
        }
        return num;

    }
};
