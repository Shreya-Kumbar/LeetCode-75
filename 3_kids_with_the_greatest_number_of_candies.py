# LeetCode 1431: Kids with the Greatest Number of Candies
# https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result = []
        MaxSoFar = 0

        for item in candies:
            if item > MaxSoFar:
                MaxSoFar = item

        for numberOfCandies in candies:
            if numberOfCandies + extraCandies >= MaxSoFar:
                result.append(True)

            else:
                result.append(False)

        return result