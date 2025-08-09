# LeetCode 443: String Compression
# https://leetcode.com/problems/string-compression/


class Solution:
    def compress(self, chars: List[str]) -> int:
        s = ""
        count = 1

        for i in range(len(chars)):
            if i+1 < len(chars) and chars[i] == chars[i+1]:
                count += 1
            elif count == 1:
                s += chars[i]
            else:
                s += chars[i]
                s += str(count)
                count = 1
                
        chars.clear()
        chars.extend(list(s))

        return len(chars)