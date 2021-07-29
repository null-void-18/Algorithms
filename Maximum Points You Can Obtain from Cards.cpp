class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int n=c.size();
        int ans=0;
        for(int i=0;i<k;i++){
            ans+=c[i];
        }
        if(n==k) return ans;
        int i=k-1;
        int j=n-1;
        int sum=ans;
        while(i>=0){
            sum-=c[i];
            sum+=c[j];
            ans=max(ans,sum);
            i--;
            j--;
        }
        return ans;
    }
};
