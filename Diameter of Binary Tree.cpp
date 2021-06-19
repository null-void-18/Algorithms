class Solution {
  public:
    int height(Node* root){
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        int m=0;
        if(!root) return 0;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int s=q.size();
            
            for(int i=0;i<s;i++){
                Node* n=q.front();
                int l=height(n->left);
                int r=height(n->right);
                m=max(m,l+r+1);
                q.pop();
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
        }
        return m;
        // Your code here
    }
};
