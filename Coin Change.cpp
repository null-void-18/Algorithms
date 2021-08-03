class Solution {
public:
    int coinChange(vector<int>& coins, int a) {
        vector<int> dp(a+1,0);
        dp[0]=0;
        if(a==0) return 0;
        for(int i=1;i<=a;i++){
            for(int j:coins){
                if(j<=i and dp[i-j]!=0){
                    if(dp[i]!=0)
                    dp[i]=min(dp[i],dp[i-j]+1);
                    else dp[i]=dp[i-j]+1;
                }
                else if(j<=i and i-j==0) dp[i]=1;
                else continue;
            }
        }
        return dp[a]==0?-1:dp[a];
    }
};
