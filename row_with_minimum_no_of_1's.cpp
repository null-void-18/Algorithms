#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m,n,t;
    
    cin>>t;
    
    while(t--){
        cin>>n>>m;
        int a[n*m];
        int flag=0;
        for(int i=0;i<n*m;i++){
            cin>>a[i];
            if(a[i]==1) flag=1;
        }
        
        if(!flag){
            cout<<-1<<'\n';
        }
        else{
            int k=0,index=0,ans=INT_MAX;
            for(int i=0;i<n;i++){
                int count=0;
                for(int j=0;j<m;j++){
                    if(a[k]==1) count++;
                    k++;
                }
                if(count and count<ans){
                    index=i;
                    ans=count;
                }
                
            }    
            cout<<index<<'\n';
        }
    }
    
	//code
	return 0;
}
