class Solution{
    public:
    
    void backtrack(vector<string>& ans,vector<vector<int>>& m,vector<vector<int>> vis,string t,int i,int j,int n){
        if(i==n or j==n) return;
        
        if(i==n-1 and j==n-1){
            ans.push_back(t);
            return;
        }
        
        vis[i][j]=1;
        if(i+1<n and vis[i+1][j]==0 and m[i+1][j]==1){
            backtrack(ans,m,vis,t+'D',i+1,j,n);
        }
        if(j+1<n and vis[i][j+1]==0 and m[i][j+1]==1){
            backtrack(ans,m,vis,t+'R',i,j+1,n);
        }
        if(i-1>=0 and vis[i-1][j]==0 and m[i-1][j]==1){
            backtrack(ans,m,vis,t+'U',i-1,j,n);
        }
        
        if(j-1>=0 and vis[i][j-1]==0 and m[i][j-1]==1){
            backtrack(ans,m,vis,t+'L',i,j-1,n);
        }
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0]==0) return ans;
        vector<vector<int>> vis(n,vector<int>(n,0));
        string t="";
        backtrack(ans,m,vis,t,0,0,n);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
