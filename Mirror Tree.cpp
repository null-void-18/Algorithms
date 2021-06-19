class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        queue<Node*> q;
        if(!node) return ;
    
        q.push(node);
    
        while(!q.empty()){
            int s=q.size();
        
            for(int i=0;i<s;i++){
                Node* root=q.front();
                int flag=0;
                q.pop();
                if(root->left){
                    ++flag;
                    q.push(root->left);
                } 
                if(root->right){
                    ++flag;
                    q.push(root->right);
                } 
                if(flag==2){
                    Node* temp=root->right;
                    root->right=root->left;
                    root->left=temp;
                }
                else if(flag==1){
                if(root->left){
                    root->right=root->left;
                    root->left=NULL;
                }
                else{
                    root->left=root->right;
                    root->right=nullptr;
                }
                }
            }
        }
    }
};
