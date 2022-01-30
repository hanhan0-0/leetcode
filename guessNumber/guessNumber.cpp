/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if(n==1)
           return 1;
        long begin=0;
        long end=n;
        long mid;
        long pick;
        mid=2147483648<(end+begin)/2?2147483648:(end+begin)/2;
        pick=guess(mid);
        while(pick!=0)
        {
            if(pick==-1)
            {
                end=(end+begin)/2;
            }
            if(pick==1)
            {
                begin=(end+begin)/2;
            }
            if(begin+1==end)
            {
                if(guess(end)==0)
                    return end;
                else
                    return begin;
            }
            pick=guess((end+begin)/2);
        }
        return (end+begin)/2;
        
    }
};
