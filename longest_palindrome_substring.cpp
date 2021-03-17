#include<bits/stdc++.h>
using namespace std;

void lps(string st){
    int s=0,i,j,max=1,k;
    
    int l=st.length();
    bool t[l][l];
    
    memset(t,0,sizeof(t));
    
    for(int i=0;i<l;i++){
        t[i][i]=1;
    }
    int r=0;
    for(int i=0;i<l;i++){
        if(st[i]==st[i+1]){
            t[i][i+1]=1;
            if(r==0){
                r=1;
                max=2;
                s=i;
            }
        }
    }
    
    for(k=3;k<=l;k++){
        for(int i=0;i<l-k+1;i++){
            int j=i+k-1;
            if(t[i+1][j-1] and st[i]==st[j]){
                t[i][j]=1;
                if(k>max){
                max=k;
                s=i;
                }
            }
        }
    }
    
    for(int i=s;i<s+max;i++){
        cout<<st[i];
    }
    
    cout<<'\n';
}

int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     
     int t;
     cin>>t;
     while(t--){
         string s;
         cin>>s;
         lps(s);
     }
     
	//code
	return 0;
}
