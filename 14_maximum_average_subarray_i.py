# LeetCode 643: Maximum Average Subarray I
# https://leetcode.com/problems/maximum-average-subarray-i/

class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:

        subarray_sum = sum(nums[ : k])
        maxSum = subarray_sum

        for i in range(k, len(nums)):

            subarray_sum += nums[i] - nums[i - k]
            # we move the whole subarray set forward by one element
               
            maxSum = max(maxSum, subarray_sum)

        return maxSum/k