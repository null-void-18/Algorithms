class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        stack<int> s;
        vector<int> ans(n,1);
        s.push(0);
        for(int i=1;i<n;i++){
            if(price[s.top()]>price[i]){
                s.push(i);
            }
            else{
                int curr=0;
                while(!s.empty() and price[s.top()]<=price[i]){
                    curr+=ans[s.top()];
                    s.pop();
                }
                ans[i]+=curr;
                s.push(i);
            }
        }
        return ans;
       // Your code here
    }
};
