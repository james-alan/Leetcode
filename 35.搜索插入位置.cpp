/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        // 二分查找
        int left = 0;
        int right = nums.size() - 1;
        return searchInsert(nums, target, left, right);
    }

    // 递归
    int searchInsert(vector<int> &nums, int target, int left, int right)
    {
        if (left > right)
        {
            return left;
        }
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            return searchInsert(nums, target, left, mid - 1);
        }
        else
        {
            return searchInsert(nums, target, mid + 1, right);
        }
    }
};
// @lc code=end
