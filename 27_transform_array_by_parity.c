// LeetCode 3467: Transform Array by Parity
// https://leetcode.com/problems/transform-array-by-parity/description/

/**
 * Note: The returned array must be malloced, assume caller calls free().
*/

int* sort(int* nums, int numsSize){

    int left = 0, right = numsSize - 1;
    while (left < right){
        if (nums[left] == 1 && nums[right] == 0){
            int temp = nums[right];
            nums[right] = nums[left];
            nums[left] = temp;
            // printf("swapped\n");
            // printf("nums[left] = %d nums[right] = %d\n\n", nums[left], nums[right]);
            left++;
            right--;
        }
        else if (nums[left] == 1)
            right--;
        else if (nums[right] == 0)
            left++;
        else{
            left++;
            right--;
        }
    }
    return nums;
}

int* transformArray(int* nums, int numsSize, int* returnSize) {
    
    for (int i = 0; i < numsSize; i++){
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

    sort(nums, numsSize);
    *returnSize = numsSize;
    return nums;
}