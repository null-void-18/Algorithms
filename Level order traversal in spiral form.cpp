vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    queue<Node*> q;
    if(!root) return  {};
    bool level=true;
    q.push(root);
    
    while(!q.empty()){
        int s=q.size();
        vector<Node*> t;
        for(int i=0;i<s;i++){
            Node* n=q.front();
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
            t.push_back(n);
            q.pop();
        }
        if(level){
            reverse(t.begin(),t.end());
        }
        level=!level;
        for(int i=0;i<t.size();i++){
            ans.push_back(t[i]->data);
        }
    }
    
    return ans;
    //Your code here
}
