class Solution{
public:

    void backtrack(vector<string>& ans,string t,string s,int i,int n){
        if(i==n-1) {
            ans.push_back(t+s[i]);
            return;
        } 
        t+=s[i];
        backtrack(ans,t+' ',s,i+1,n);
        backtrack(ans,t,s,i+1,n);
        return;
    }

    vector<string> permutation(string s){
        int n=s.length();
        
        int i=0;
        
        vector<string> ans;
        string t="";
        backtrack(ans,t,s,i,n);
        return ans;
        // Code Here
    }
};
