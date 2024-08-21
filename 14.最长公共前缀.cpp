/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // 如果strs为空，则返回空字符串
        if (strs.size() == 0)
            return "";

        // 初始化一个空字符串 用来存储返回值
        string index;
        char temp;
        int i = 0;
        int j = 0;
        do
        {
            /* code */
            if (j >= strs[0].size())
                return index;
            // 标兵等于第一个字符串的第j个字符
            temp = strs[0][j];
            for (i = 0; i < strs.size(); i++)
            {
                if (strs[i][j] != temp)
                    return index;
                if (i == strs.size() - 1)
                {
                    index += temp;
                }
            }
            j++;

        } while (1);

        return index;
    }
};
// @lc code=end
