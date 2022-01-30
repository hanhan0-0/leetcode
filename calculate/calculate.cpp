class Solution {
public:
    int calculate(string s) {
        int a=1;
        int b=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
              a=2*a+b;
            else
              b=2*b+a;
        }
        return a+b;

    }
};
