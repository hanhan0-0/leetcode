class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        digits[i]++;
        while(digits[i]>9)
        {
            digits[i]=digits[i]-10;
            i--;
            if(i>-1)
               digits[i]++;
            if(i<0)
            {
                digits.insert(digits.begin(),1);
                break;
            }
        }
        return digits;
    }
};
