# LeetCode 1657: Determine if Two Strings Are Close
# https://leetcode.com/problems/determine-if-two-strings-are-close/

class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:

        if len(word1) != len(word2):
            return False

        if set(word1) != set(word2):
            return False

        def counts(word):

            countList = []

            for char in set(word):
                countList.append(word.count(char))

            return countList

        return sorted(counts(word1)) == sorted(counts(word2))