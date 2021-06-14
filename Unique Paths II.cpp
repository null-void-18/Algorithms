class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m=o.size(),n=o[0].size();
        int a[m][n];
        int flag=0;
        for(int i=0;i<m;i++){
            if(o[i][0]==1){
                a[i][0]=0;
                flag=1;
            }
            if(flag){
                a[i][0]=0;
            }
            else{
                a[i][0]=1;
            }
        }
        flag=0;
        for(int i=0;i<n;i++){
            if(o[0][i]==1) {
                flag=1;
                a[0][i]=0;
            }
            if(flag){
                a[0][i]=0;
            }
            else{
                a[0][i]=1;
            }
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(o[i][j]==1){
                    a[i][j]=0;
                }
                else a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
        return a[m-1][n-1];
    }
};
