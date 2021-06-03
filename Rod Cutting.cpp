class Solution{
  public:
    int cutRod(int p[], int n) {
        int a[n+1];
        a[0]=0;
        for(int i=1;i<=n;i++){
            int q=-1;
            for(int j=1;j<=i;j++){
                q=max(q,p[j-1]+a[i-j]);
            }
            a[i]=q;
        }
        return a[n];
        //code here
    }
};
