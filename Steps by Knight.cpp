class Solution 
{
    public:
    
    int findcount(queue<pair<int,int>> &q,vector<int> &t,int N){
        vector<vector<bool>> visited(N+1,vector<bool>(N+1,false));
        int x[8]={-2,-2,-1,-1,1,1,2,2};
        int y[8]={-1,1,-2,2,2,-2,-1,1};
        int count=0;
        visited[q.front().first][q.front().second]=true;
        pair<int,int> p=make_pair(t[0],t[1]);
        
        while(!q.empty()){
            int size=q.size();
            for(int i=1;i<=size;i++){
                pair<int,int> temp=make_pair(q.front().first,q.front().second);
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                if(temp == p){ return count;}
                for(int j=0;j<8;j++){
                    int xx=a+x[j];
                    int yy=b+y[j];
                    if(xx>=1 and yy>=1 and xx<=N and yy<=N and !visited[xx][yy]){
                        temp=make_pair(xx,yy);
                        q.push(temp);
                        visited[xx][yy]=true;
                    }
                }
            }
            ++count;
        }
       return count; 
    }
    
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    if(KnightPos[0]==TargetPos[0] and KnightPos[1]==TargetPos[1]) return 0;
	    queue<pair<int,int>> q;
	    q.push(make_pair(KnightPos[0],KnightPos[1]));
	    return findcount(q,TargetPos,N);
	    // Code here
	}
};
