class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(begin(in),end(in));
        int n=in.size();
        if(n<=1) return in;
        ans.push_back(in[0]);
        for(int i=1;i<n;i++){
            if(ans.back()[1]>=in[i][0]) ans.back()[1]=max(ans.back()[1],in[i][1]);
            else ans.push_back(in[i]);
        }
        return ans;
    }
};
