// LeetCode 162: Find Peak Element
// https://leetcode.com/problems/find-peak-element/description/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        if (nums.size() == 1 || nums[0] > nums[1])
            return 0;
        else if (nums[nums.size() - 1] > nums[nums.size() - 2])
            return nums.size() - 1;

        int low = 1, high = nums.size() - 2;
        while (low <= high) {
            int m = low + (high - low) / 2;

            if (nums[m] > nums[m + 1])
                high = m - 1;

            else
                low = m + 1;
        }

        return low;
    }
};