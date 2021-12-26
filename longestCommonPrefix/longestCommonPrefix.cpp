class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        string s=strs[0];
        string s2="";
        int flag1;
        int flag2;
        for(int i=1;i<strs.size();i++)
        {
            flag1=0;
            flag2=0;
            if(strs[i].size()==0)
                   return s2;
            while(flag1<s.size()&&flag2<strs[i].size())
            {
                
                if(s.size()>strs[i].size())
                   s.erase(strs[i].size());
                if(s[flag1]==strs[i][flag2])
                {
                    flag1++;
                    flag2++;
                    continue;
                } 
                else 
                {
                    s.erase(flag1);
                    break;
                }
            }
        }
        return s;
    }
};
