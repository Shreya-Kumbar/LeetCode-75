# LeetCode 345: Reverse Vowels of a String
# https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution:
    def reverseVowels(self, s: str) -> str:
        
        Vowels = set("aeiouAEIOU")

        s = list(s)

        i, j = 0, len(s) - 1

        while i < j:

            if s[i] not in Vowels:
                i += 1
                
            if s[j] not in Vowels:
                j -= 1

            if s[i] in Vowels and s[j] in Vowels:
                s[i], s[j] = s[j], s[i]
                i += 1
                j -= 1

        return "".join(s)