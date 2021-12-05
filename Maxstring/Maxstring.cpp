class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int start,end;
    start=end=0;
    int max=0;
    int map[256]={0};
    while(end<s.length())
    {
        if(map[(int)s[end]]==1 && start!=end)
           { 
              map[(int)s[start++]]=0;
               continue;
           }
        max=max>(end-start+1)?max:(end-start+1);
        map[(int)s[end++]]=1;
    }
     return max;
    }
};
