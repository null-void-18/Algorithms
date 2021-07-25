class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n);
        int m=nums[n-1],pos=n-1;
        for(int i=n-1;i>=0;i--){
            if(m>=nums[i]){
                m=nums[i];
                pos=i;
            }
            a[i]=m;
        }
        m=a[0];
        for(int i=0;i<pos;i++){
            if(m<nums[i]){
                m=nums[i];
            }
        }
        pos+=1;
        for(int i=pos;i<n;i++){
            cout<<a[i]<<' '<<pos<<' ';
            if(m<=a[i]){
                break;
            }
            m=max(m,nums[i]);
            ++pos;
        }
        
        return pos;
    }
};
