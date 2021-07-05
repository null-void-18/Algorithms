class Solution{
    public:
    
    int longestCommonSubstr (string t, string s, int m, int n)
    {
        int dp[m+1][n+1];
        int ans=0;
        for(int i=0;i<m+1;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<n+1;i++){
            dp[0][i]=0;
        }
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(t[i-1]==s[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(ans,dp[i][j]);
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        return ans;
        // your code here
    }
};
