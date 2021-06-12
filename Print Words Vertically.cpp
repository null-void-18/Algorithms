class Solution {
public:
    vector<string> printVertically(string s) {
        stringstream ss(s);
        string word;
        vector<string> res,ans;
        int n=0;
        while(ss>>word){
            int z=word.length();
            n=max(n,z);
            res.push_back(word);
        }
        int j=0;
        for(int j=0;j<n;j++){
            string z,t="";
            for(int i=0;i<res.size();i++){
                if(res[i].length()<=j){
                    t+=' ';
                }
                else{
                    t+=res[i][j];
                }
            }
            for(int k=t.size()-1;k>=0;k--){
                if(t[k]==' '){
                    t.erase(k,1);
                }
                else {
                    break;
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};
