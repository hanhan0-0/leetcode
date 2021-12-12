class Solution {
public:
    string convert(string s, int numRows) {
    string a[numRows];
    int i=0;
    int flag=0;
    while(i<s.length())
    {
        if(numRows==1)
            return s;
        if(flag==(numRows-2))
        {
            while(flag>-1 && i<s.length())
            {
                 a[flag]+=s[i++];
                 flag--;
            }
            flag=flag+2;;
        }
        if(flag==0 || flag ==1)
        {
            while(flag<numRows && i<s.length())
            {
                a[flag]+=s[i++];
                flag++;
            }
            flag=flag-2;
        }
    }
    for(int j=1;j<numRows;j++)
    {
        a[0]+=a[j];
    }
   
    return a[0];
    }
};
