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
    int solve(TreeNode *root,int &parent,int height,int value)
    {
        if(!root)
            return 0;
        if(root->val == value) return height;
        parent = root->val;
        int left = solve(root->left,parent,height+1,value);
        if(left) return left;
        parent = root->val;
        int right = solve(root->right,parent,height+1,value);
        return right;
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x || root->val == y) return false;
        int xParent = -1,yParent = -1;
        int xHeight = solve(root,xParent,0,x);
        int yHeight = solve(root,yParent,0,y);
        if(xParent != yParent && xHeight == yHeight) return true;
        return false;
    }
};