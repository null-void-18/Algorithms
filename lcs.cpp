#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<vector>
using namespace std;

void printlcs(string s1,int i,int j,vector<vector<int>> dp){
    if(i<0 or j<0) return;
    if(dp[i-1][j-1]+1==dp[i][j]){
        printlcs(s1,i-1,j-1,dp);
        cout<<s1[i-1];
    }
    else if(dp[i-1][j]==dp[i][j]){
        printlcs(s1,i-1,j,dp);
    }
    else printlcs(s1,i,j-1,dp);
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.length(),n=s2.length();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    
    for(int i=0;i<=m;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=n;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<'\n'<<dp[m][n]<<'\n';
    printlcs(s1,m,n,dp);
    return 0;
}
