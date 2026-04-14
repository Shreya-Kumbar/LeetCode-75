// LeetCode 1493: Longest Subarray of 1's After Deleting One Element
// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int len = 0, zeroes = 0;
        int maxLen = 0;
        int left = 0;
        for (int right = 0; right < nums.size(); right++){
            if (nums[right] == 0){
                zeroes++;
            }

            while (zeroes > 1){
                if (nums[left] == 0){
                    zeroes--;
                }
                left++;
            }

            maxLen = max(maxLen, right - left);
        }

        return maxLen;
    }
};