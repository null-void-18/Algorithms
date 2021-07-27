class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=INT_MAX;
        int ans;
        for(int i=0;i<n-2;i++){
            int lo=i+1,h=n-1;
            int sum=0;
            while(lo<h){
                sum=nums[i]+nums[lo]+nums[h];
                if(abs(target-sum)<m){
                m=abs(target-sum);
                    ans=sum;
                }
                if(sum>=target) h--;
                else lo++;
            }
            if(m==0) break;
        }
        return ans;
    }
};
