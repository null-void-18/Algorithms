#include<iostream>

using namespace std;

int min(int a,int b){
    return (a < b) ? a : b;
}

int coinchange(int coins[],int n,int m){
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=INT_MAX;
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            if(coins[j] <= i){
                dp[i]=min(dp[i],1+dp[i-coins[j]]);
            }
        }
    }
   // for(int i=0;i<n+1;i++)
      //  cout<<dp[i]<<' ';
    return dp[n];
}


int main()
{
    int n,v;
    cin>>n;
    cin>>v;
    int a[v];
    for(int i=0;i<v;i++){
        cin>>a[i];
    }
    cout<<coinchange(a,n,v);
    return 0;
}
