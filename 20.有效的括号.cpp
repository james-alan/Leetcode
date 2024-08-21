/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st; // 定义栈节点
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]); // 入栈
            }
            else
            {
                if (st.empty())
                    return false; // 栈为空，则不匹配

                if (s[i] == ')' && st.top() != '(')
                    return false; // 右括号不匹配)
                if (s[i] == ']' && st.top() != '[')
                    return false; // 右括号不匹配]
                if (s[i] == '}' && st.top() != '{')
                    return false; // 右括号不匹配}
                st.pop();         // 出栈
            }
        }
        return st.empty();
    }
};
// @lc code=end
