/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:

    int romanToInt(string s) {
        int sum = 0;
        int length = s.size();
        for (int i = 0 , j = 1; i<length; i++, j++)
        {
            /* code */
            if(s[i] == 'I' && s[j] == 'V'){
                sum+=4;
                i++;
                j++; 
                continue;
            }
            if(s[i] == 'I' && s[j] == 'X'){
                sum+=9;
                i++;
                j++; 
                continue;
            }
            if(s[i] == 'X' && s[j] == 'L'){
                sum+=40;
                i++;
                j++;
                continue; 
            }
            if(s[i] == 'X' && s[j] == 'C'){
                sum+=90;
                i++;
                j++;
                continue; 
            }
            if(s[i] == 'C' && s[j] == 'D'){
                sum+=400;
                i++;
                j++;
                continue; 
            }
            if(s[i] == 'C' && s[j] == 'M'){
                sum+=900;
                i++;
                j++;
                continue; 
            }
            switch (s[i])
            {
                case 'I':
                    sum+=1;
                    break;
                case 'V':
                    sum+=5;
                    break;
                case 'X':
                    sum+=10;
                    break;
                case 'L':
                    sum+=50;
                    break;
                case 'C':
                    sum+=100;
                    break;
                case 'D':
                    sum+=500;
                    break;
                case 'M':
                    sum+=1000;
                    break;
            }
        }
        return sum;
    }
};
// @lc code=end

