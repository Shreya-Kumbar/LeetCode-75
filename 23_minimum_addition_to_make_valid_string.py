# LeetCode 2645: Minimum Additions to Make Valid String
# https://leetcode.com/problems/minimum-additions-to-make-valid-string/

class Solution:
    def addMinimum(self, word: str) -> int:
        
        count = 0
        j = 0
        string = "abc"

        for i in word:
            while i != string[j]:
                count += 1
                j = (j + 1) % 3

            j = (j + 1) % 3

        if j != 0:
            count += (3 - j)

        return count