/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public void ConstructBst(int key,TreeNode root)
    {
        while(true)
        {
            if(root.val > key)
            {
                if(root.left == null)
                {
                    root.left = new TreeNode(key);
                    return;
                }
                else root = root.left;
            }
            else
            {
               if(root.right == null)
                {
                    root.right = new TreeNode(key);
                    return;
                }
                else root = root.right;
            }
        }
        
    }
    public TreeNode BstFromPreorder(int[] preorder) {
        if(preorder.Length == 0) return null;
        TreeNode root = new TreeNode(preorder[0]);
        for(int i = 1;i<preorder.Length;i++)
        {
            ConstructBst(preorder[i],root);
        }
        return root;
    }
}