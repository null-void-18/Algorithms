#include<iostream>

using namespace std;


int lis(int a[],int n)
{
    int max=0,list[n];
    list[0]=1;
    for(int i=1;i<n;i++){
        list[i]=1;
        for(int j=0;j<i;j++){
            if(a[i]>a[j] && list[i]<list[j]+1){
                list[i]=list[j]+1;
            }
        }
        if(max<list[i])
            max=list[i];
    }
    return max;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<lis(a,n);
    return 0;
}
