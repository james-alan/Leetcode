/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //数组为空或只有一个元素，直接返回
        if(nums.size()<=1) return nums.size();

        //去除重复的元素
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                nums[++i]=nums[j];
            }
        }

        return i+1;
    }   
};
// @lc code=end

