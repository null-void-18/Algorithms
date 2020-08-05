#include<iostream>
using namespace std;


bool subset(int s[],int n,int N)
{
    bool dp[n+1][N+1];


    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }

    for(int j=1;j<=N;j++){
        dp[0][j]=0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=N;j++){
            if(j<s[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j] || dp[i-1][j-s[i-1]];
            }
        }
    }
    return dp[n][N];
}



int main()
{
    int n,N;
    cin>>n;
    cin>>N;
    int s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<subset(s,n,N);
    return 0;
}
