/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;

        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '&&count == 0)
                continue;
            if(s[i]==' '&&count!= 0) 
                break;
            if(s[i]!=' ')
                count++;

        }
        return count;

    }
};
// @lc code=end

