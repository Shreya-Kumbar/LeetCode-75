# LeetCode 345: Reverse Vowels of a String
# https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution:
    def reverseVowels(self, s: str) -> str:
        
        s = list(s)
        Vowels = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
        VowelsPresent = []
        index = []

        for i in range(len(s)):
            for vowel in Vowels:
                if s[i] == vowel:
                    VowelsPresent.append(vowel)
                    index.append(i)

        for i in index:
            s[i] = VowelsPresent.pop()

        return ''.join(s) 