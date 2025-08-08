# LeetCode 334: Increase Triplet Subsequence
# https://leetcode.com/problems/increasing-triplet-subsequence/

class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        
        small = float("inf")
        mid = float("inf")

        for x in nums:
            if x <= small:
                small = x     # smallest number
            elif x <= mid:
                mid = x       # second smallest number
            else:             # we found a number bigger than both (triplet found!)
                return True

        return False