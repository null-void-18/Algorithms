class Solution
{
    public:
    
    int calculate(Node* root){
        if(!root) return 0;
        return (root->data+calculate(root->left)+calculate(root->right));
    }
    
    bool isSumTree(Node* root)
    {
        queue<Node*> q;
        if(!root) return 1;
        q.push(root);
        
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            if(!temp->left and !temp->right) continue;
            int l=calculate(temp->left);
            int r=calculate(temp->right);
            
            if(l+r==temp->data){
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            else{
                return 0;
            }
        }
        return 1;
         // Your code here
    }
};
