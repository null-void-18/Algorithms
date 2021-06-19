vector<int> noSibling(Node* node)
{
    vector<int> ans;
    queue<Node*> q;
    if(!node) return {-1};
    
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
            if(flag==1){
                if(root->left) ans.push_back(root->left->data);
                else ans.push_back(root->right->data);
            }
        }
    }
    
    sort(ans.begin(),ans.end());
   if(ans.size()==0){
       return {-1};
   }
   return ans;
    // code here
}
