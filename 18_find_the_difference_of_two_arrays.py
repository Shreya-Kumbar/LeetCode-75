# LeetCode 2215: Find the Difference of Two Arrays
# https://leetcode.com/problems/find-the-difference-of-two-arrays/

class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        
        set1, set2 = set(nums1), set(nums2)

        only_nums1 = list(set1 - set2)
        only_nums2 = list(set2 - set1)

        return [list(set1 - set2), list(set2 - set1)]