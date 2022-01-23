class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int sum=0;
        while(true)
        {
            if(s[i]!=' ')
               sum++;
            i--;
            if(i==-1)
               break;
            if(s[i]==' '&&s[i+1]!=' ')
               break;
        }
        return sum;
    }
};
