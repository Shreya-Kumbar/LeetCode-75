// LeetCode 700: Search in a Binary Search Tree
// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* searchBST(struct TreeNode* root, int val) {
    
    if (root == NULL)
        return NULL;

    if (val == root -> val)
        return root;

    else if (val > root -> val)
        return searchBST(root -> right, val);
        
    else
        return searchBST(root -> left, val);
}