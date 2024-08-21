/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // 思路：设置两个指针，一个指向haystack的头部，一个指向needle的头部。
        // 如果haystack的指针已经到达字符串尾部，则说明没有找到匹配项，返回-1。
        // 如果haystack的指针和needle的指针指向的字符相同，则将needle的指针向后移一位，haystack的指针向后移一位。

        // 判空
        if (haystack.empty() || needle.empty())
            return -1;
        if (haystack.size() < needle.size())
            return -1;

        int h = 0;
        while (h < (haystack.size() - needle.size() + 1))
        {
            if (isEqual(haystack, h, needle))
            {
                return h;
            }
            else
            {
                h++;
            }
        }

        return -1;
    }

    bool isEqual(string haystack, int h, string needle)
    {
        for (int i = 0; i < needle.size(); i++)
        {
            if (haystack[h] != needle[i])
                return false;
            h++;
        }
        return true;
    }
};
// @lc code=end
