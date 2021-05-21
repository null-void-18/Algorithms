class Solution{
public:

    int steppingNumbers(int n, int m)
    {
        int count=0;
        if(n<11 and m<11){
            return max(n,m)+1;
        }
        
        for(int i=n;i<=m;i++){
            if(i<11) {
                ++count;
                continue;
            }
            string s=to_string(i);
            for(int i=0;i<s.length()-1;i++){
                if(abs ( (int)s[i]-(int)s[i+1]) != 1){
                    --count;
                    break;
                }
            }
            ++count;
        }
        // Code Here
        return count;
    }
};
