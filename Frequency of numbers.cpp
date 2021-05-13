#include<bits/stdc++.h>
using namespace std;

bool cmpr(pair<int,int> &a,pair<int,int> &b){
    if(a.second==b.second)
    return a.first < b.first;
    
    return a.second > b.second;
}

int main()
 {
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int t;
    
    cin>>t;
    
    while(t--){
        map<int,int> mp;
        cin>>n;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(mp.find(x)==mp.end()){
                mp.insert(pair<int,int>(x,1));
            }
            else{
                mp[x]++;
            }
        }
        vector<pair<int, int>> A;
  
    
    for (auto& it : mp) {
        A.push_back(it);
    }
        sort(A.begin(),A.end(),cmpr);
        
        for(auto x:A){
            for(int i=0;i<x.second;i++){
                cout<<x.first<<' ';
            }
        }
        cout<<'\n';
    }
	//code
	return 0;
}
