class Solution {
public:
    int dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,vector<vector<bool>>& visit,int i,int j){
        if(i<0 or j<0 or i>=grid2.size() or j>=grid2[0].size() or grid2[i][j]==0 or visit[i][j]) return 0;
        if(grid2[i][j]!=grid1[i][j]) return -1;
        visit[i][j]=true;
        return (dfs(grid1,grid2,visit,i+1,j)+dfs(grid1,grid2,visit,i,j+1)+dfs(grid1,grid2,visit,i-1,j)+dfs(grid1,grid2,visit,i,j-1));
    }
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int count=0;
        int m=grid2.size(),n=grid2[0].size();
        vector<vector<bool>> visit(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1 and !visit[i][j]){
                    int x=dfs(grid1,grid2,visit,i,j);
                    if(x>=0) count++; 

                }
            }
        }
        return count;
    }
};
