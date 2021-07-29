class Solution{   
public:
    bool isSubsetSum(int n, int arr[], int sum){
        int dp[n+1][sum+1];
        
        for(int i=0;i<sum+1;i++){
            dp[0][i]=0;
        }
        
        for(int i=0;i<n+1;i++){
            dp[i][0]=1;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]>sum) dp[i][j]=dp[i-1][j];
                else if(arr[i-1]==sum) dp[i][j]=1;
                else{
                    if(dp[i-1][j-arr[i-1]]) dp[i][j]=1;
                    else dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
        // code here 
    }
};
