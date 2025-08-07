# LeetCode 238: Product of Array Except Self
# https://leetcode.com/problems/product-of-array-except-self/

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        answer = [1] * len(nums)

        prefix = 1
        for i in range(len(nums)):
            answer[i] = prefix
            prefix *= nums[i]          # product of all numbers before i

        suffix = 1
        for i in reversed(range(len(nums))):
            answer[i] *= suffix
            suffix *= nums[i]          # product of all numbers after i

        return answer

    ## The solution below works fine as well but is slow for large input arrays ⬇⬇⬇
    
    #   result = []
    #   product = 1

    #   for i in range(len(nums)):
    #       for k in range(len(nums)):
    #           if i != k:
    #               product = product*nums[k]
                   
    #       result.append(product)
    #       product = 1

    #   return result