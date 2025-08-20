# LeetCode 1456: Max Number of Vowels in A Substring of Given Length
# https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        
        Vowels = set("aeiouAEIOU")

        # count vowels in first subset
        count = sum(1 for i in s[ : k] if i in Vowels)
        max_count = count

        # move the subset front
        for i in range(k, len(s)):

            if s[i] in Vowels:
                count += 1
            
            if s[i - k] in Vowels:
                count  -= 1

            max_count = max(max_count, count)

        return max_count