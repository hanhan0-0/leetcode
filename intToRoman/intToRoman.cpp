class Solution {
public:
    string intToRoman(int num) {
        string n=to_string(num);
        string n1;
        int len=n.length();
        if(len==4)
        {
            int a=num/1000;
            for(int i=0;i<a;i++)
                n1=n1+'M';
            len--;
        }
        if(len==3)
        {
            int a=(num/100)%10;
            if(a<4)
            {
                for(int i=0;i<a;i++)
                    n1=n1+'C';
            }
            if(a==4)
            {
                n1=n1+"CD";
            }
            if(4<a&&a<9)
            {
                n1=n1+'D';
                for(int i=5;i<a;i++)
                {
                    n1=n1+'C';
                }
            }
            if(a==9)
                n1=n1+"CM";
            len--;
        }
        if(len==2)
        {
            int a=(num/10)%10;
            if(a<4)
            {
                for(int i=0;i<a;i++)
                    n1=n1+'X';
            }
            if(a==4)
            {
                n1=n1+"XL";
            }
            if(4<a&&a<9)
            {
                n1=n1+'L';
                for(int i=5;i<a;i++)
                {
                    n1=n1+'X';
                }
            }
            if(a==9)
                n1=n1+"XC";
           
            len--;
        }
        if(len==1)
        {
            int a=num%10;
            if(a<4)
            {
                for(int i=0;i<a;i++)
                    n1=n1+'I';
            }
            if(a==4)
            {
                n1=n1+"IV";
            }
            if(4<a && a<9)
            {
                n1=n1+'V';
                for(int i=5;i<a;i++)
                {
                    n1=n1+'I';
                }
            }
            if(a==9)
                n1=n1+"IX";
            
        }
        return n1;
    }
};
