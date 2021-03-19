#include<bits/stdc++.h>
using namespace std;

int lps(string s){
    
    int n=s.length();
    bool t[n][n];
    
    memset(t,0,sizeof(t));
    int k;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            t[i][i+1]=1;
        }
    }
    
    for(int i=0;i<n-2;i++){
        int j=i+2;
        if(s[i]==s[j]){
            t[i][j]=1;
        }
    }
    
    
    for(k=4;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            
            if(t[i+1][j-1] and s[i]==s[j]){
                t[i][j]=1;
            }
        }
    }
    
    int count=0;
   
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(t[i][j]==1) count++;
        }
    }
    return count;
}


int main()
 {
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        int x;
        cin>>x;
    string s;
    cin>>s;
    int n=lps(s);
    cout<<n<<'\n';
    }
    
	//code
	return 0;
}
