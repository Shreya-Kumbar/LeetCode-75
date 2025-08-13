# LeetCode 392: Is Subsequence
# https://leetcode.com/problems/is-subsequence/

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:

        count = 0

        for i in t:
            if count < len(s) and s[count] == i:
                count += 1
        
        return count == len(s)