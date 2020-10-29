// Floyd's algo to find duplicate number in an array with a constraint of only one duplicate in the array
//Time Complexity  :  O(n)
//Space Complexity  :  O(1)

#include<iostream>

using namespace std;

int finddup(int nums[])
{
    int t=nums[0];
    int h=nums[0];

    do{
        t=nums[t];
        h=nums[nums[h]];
    }while(h!=t);

    t=nums[0];

    while(h!=t){
        t=nums[t];
        h=nums[h];
    }

    return h;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<finddup(a);
    return 0;
}
