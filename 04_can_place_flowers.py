# LeetCode 605: Can Place Flowers
# https://leetcode.com/problems/can-place-flowers/

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        
        # the question basically says "Can I plant *atleast* n flowers without breaking the rule?".
        
        for i in range(len(flowerbed)):

            if flowerbed[i] == 0 and (i == 0 or flowerbed[i-1] == 0) and (i == len(flowerbed) - 1 or flowerbed[i+1] == 0) :
                
                flowerbed[i] = 1         # we planted the flower now
                n -= 1                   # number of flowers remaining with us is n-1 now

                if n == 0:               # means we planted all flowers
                    return True

        return n <= 0