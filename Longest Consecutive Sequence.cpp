class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set s(begin(nums),end(nums));        
        int m=0;   
        for(auto num:s){
            if(s.count(num-1)) continue;
            int j=1;
            while(s.count(num+j)) j++;
            m=max(m,j);
        }
        return m;
        
    }
};
