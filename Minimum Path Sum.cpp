class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        int m=g.size(),n=g[0].size();
        int a[m][n];
        
        a[0][0]=g[0][0];
        
        for(int i=1;i<m;i++){
            a[i][0]=g[i][0]+a[i-1][0];
        }
        for(int i=1;i<n;i++){
            a[0][i]=g[0][i]+a[0][i-1];
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                a[i][j]=g[i][j]+min(a[i-1][j],a[i][j-1]);
            }
        }
        return a[m-1][n-1];
    }
};
