#include<iostream>
using namespace std;
int max(int a,int b){
    return (a > b) ? a : b;
}

int knapsack(int val[],int wt[],int n,int W)
{

    int k[n+1][W+1];

    for(int i=0;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(i==0 || w==0){
                k[i][w]=0;
            }
            else if(wt[i-1] <= w){
                k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            }
            else{
                k[i][w]=k[i-1][w];
            }
        }
    }

    return k[n][W];
}





int main(){
    int n,W;
    cin>>n;
    cin>>W;
    int val[n],wt[n];

    for(int i=0;i<n;i++){
        cin>>val[i];
        cin>>wt[i];
    }
    cout<<knapsack(val,wt,n,W);
    return 0;
}


