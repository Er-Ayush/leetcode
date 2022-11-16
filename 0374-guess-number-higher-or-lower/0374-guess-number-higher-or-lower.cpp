/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int a=n/2;
        while(1){
            if(guess(a)==0) return a;
            else if(guess(a)==1) a++;
            else if(guess(a)==-1) a--;
        }
        
    }
};