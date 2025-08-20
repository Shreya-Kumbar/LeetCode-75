# LeetCode 1732: Find the Highest Altitude
# https://leetcode.com/problems/find-the-highest-altitude/description/

class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        
        altitude = [0]
        prefix = 0

        for i in gain:
            altitude.append(altitude[prefix] + i)
            prefix += 1

        return max(altitude)