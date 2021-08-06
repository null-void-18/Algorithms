
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        vector<vector<int>> ans;
        if(!root) return ans;
        q.push(root);
        
        while(!q.empty()){
            int s=q.size();
            vector<int> temp;
            for(int i=0;i<s;i++){
                Node* x=q.front();
                temp.push_back(x->val);
                vector<Node*> t;
                t=x->children;
                for(auto i:t){
                    q.push(i);
                }
                q.pop();
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};
