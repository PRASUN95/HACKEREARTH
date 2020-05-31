/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
  int result;
    int index = -1;
    void dfs(TreeNode* root, int &k){
        if(root == NULL)
            return;
        dfs(root -> left, k);
        index ++;
        if(index == k-1)
            result = root -> val;
        else
            dfs(root -> right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        dfs(root,k);
        return result;
    }
};