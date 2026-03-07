// LeetCode 437: Path Sum III
// https://leetcode.com/problems/path-sum-iii/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int countFromNode(struct TreeNode *root, long long targetSum){
    if (root == NULL){
        return 0;
    }

    int count = 0;
    if (root -> val == targetSum){
        count++;
    }

    count += countFromNode(root -> right, targetSum - root -> val);
    count += countFromNode(root -> left, targetSum - root -> val);

    return count;
}

int pathSum(struct TreeNode* root, int targetSum) {
    
    if (root == NULL)
        return 0;

    return countFromNode(root, targetSum)
        + pathSum(root -> right, targetSum)
        + pathSum(root -> left, targetSum);
}