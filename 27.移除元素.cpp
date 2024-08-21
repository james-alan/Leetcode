/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        // 暴力解法
        vector<int> res;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                res.push_back(nums[i]);
                count++;
            }
        }
        nums = res;
        return count;
    }
}

;
// @lc code=end
