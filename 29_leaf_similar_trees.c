// LeetCode 104: Maximum Depth of Binary Tree
// https://leetcode.com/problems/leaf-similar-trees/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void leaves(struct TreeNode *root, int *arr, int *size){

    if (root == NULL)
        return;

    if (root -> right == NULL && root -> left == NULL){
        arr[*size] = root -> val;
        (*size)++;
        return;
    }

    leaves(root -> left, arr, size);
    leaves(root -> right, arr, size);
}

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    
    int arr1[200], arr2[200];
    int size1 = 0, size2 = 0;

    leaves(root1, arr1, &size1);
    leaves(root2, arr2, &size2);

    if (size1 != size2)
        return false;

    for (int i = 0; i < size1; i++){
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}