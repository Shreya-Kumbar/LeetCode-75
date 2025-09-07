# LeetCode 151: Reverse Words in a String
# https://leetcode.com/problems/reverse-words-in-a-string/

class Solution:
    def reverseWords(self, s: str) -> str:
        
        s = s.strip()    # remove extra spaces

        i = j = len(s) - 1
        # start from the end

        result = []

        while i >= 0:

            # we take the whole word starting from end
            while i >= 0 and s[i] != " ":
                i -= 1

            result.append(s[ i+1 : j+1 ])

            # now skip the space and do same for next word.
            while i >= 0 and s[i] == " ":
                i -= 1
            
            j = i

        return " ".join(result)