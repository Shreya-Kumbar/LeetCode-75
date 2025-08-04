# LeetCode 345: Reverse Vowels of a String
# https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution:
    def reverseVowels(self, s: str) -> str:
        
        s = list(s)
        Vowels = set('AEIOUaeiou')
        VowelsPresent = []

        for letter in s:
            if letter in Vowels:
                VowelsPresent.append(letter)

        for i in range(len(s)):
            if s[i] in Vowels:
                s[i] = VowelsPresent.pop()   # adds in reverse order

        return ''.join(s) 