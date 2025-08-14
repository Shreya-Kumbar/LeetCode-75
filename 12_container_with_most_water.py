# LeetCode 11: Container With Most Water
# https://leetcode.com/problems/container-with-most-water/

class Solution:
    def maxArea(self, height: List[int]) -> int:
        
        # first we start with the largest width
        leftline, rightline = 0, len(height) - 1
        maximum = 0

        # now replace maximum with max value
        while leftline < rightline:
            maximum = max(maximum, (rightline - leftline)*(min(height[leftline], height[rightline])))

            # move towards the smaller height one by one to check all possible cases
            if height[leftline] < height[rightline]:
                leftline += 1

            else:
                rightline -= 1

        return maximum