# LeetCode 1207: Unique Number of Occurrences
# https://leetcode.com/problems/unique-number-of-occurrences/

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        
        arr.sort()
        count = 1
        occurrences = []

        for i in range(len(arr)):

            if i + 1 < len(arr) and arr[i] == arr[i + 1]:
                count += 1

            else:
                if count in occurrences:
                    return False

                occurrences.append(count)
                count = 1

        return True