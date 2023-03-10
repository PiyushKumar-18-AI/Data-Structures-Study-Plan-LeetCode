## 235. Lowest Common Ancestor of a Binary Search Tree

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val > root->val && q->val > root->val){
            //both on right side
            return lowestCommonAncestor(root->right, p, q);
        }else if(p->val < root->val && q->val < root->val){
            //both on left side
            return lowestCommonAncestor(root->left, p, q);
        // }else if((p->val - root->val) * (q->val - root->val) < 0 || root==p || root==q){
        }else {
            //p and q are on the two sides of root
            //or one of p or q is root
            return root;
        }
        return NULL;
    }
};
