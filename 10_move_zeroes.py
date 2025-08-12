# LeetCode 283: Move Zeroes
# https://leetcode.com/problems/move-zeroes/


class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        position = 0

        for i in range(len(nums)):
            if nums[i] != 0:
                if i != position:
                    nums[i], nums[position] = nums[position], nums[i]
                position += 1
