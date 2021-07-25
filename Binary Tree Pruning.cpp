class Solution {
public:
    bool find(TreeNode* &root){
        if(!root) return false;
        
        bool l=find(root->left);
        bool r=find(root->right);
        
        if(!l) root->left=NULL;
        if(!r) root->right=NULL;
        if(root->val or l or r) return true;
        return false;
        
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        find(root);
        if(root->val == 0 and !root->left and !root->right) return NULL;
        return root;
    }
};
