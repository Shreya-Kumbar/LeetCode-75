// LeetCode 104: Maximum Depth of Binary Tree
// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {

    if (root == NULL){
        return 0;
    }
    
    int temp = maxDepth(root -> left);
    int extra = maxDepth(root -> right);

    return (temp > extra ? temp : extra) + 1;
}