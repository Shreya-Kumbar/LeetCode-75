# LeetCode 1679: Max Number of K-Sum Pairs
# https://leetcode.com/problems/max-number-of-k-sum-pairs/


class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        
        leftNum, rightNum = 0, len(nums) - 1
        count = 0
        nums.sort()    # sorted in ascending order

        while leftNum < rightNum:
            s = nums[leftNum] + nums[rightNum]

            if s == k:
                count += 1
                leftNum += 1
                rightNum -= 1

            elif s < k:
                leftNum += 1   # bigger sum needed

            else:
                rightNum -= 1  # smaller sum needed

        return count