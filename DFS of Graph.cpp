class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfs(vector<int> a[],vector<int> &ans,vector<bool> &visited,int start){
	    visited[start]=true;
	    ans.push_back(start);
	    for (auto it = a[start].begin();it != a[start].end(); it++) {
	        if(!visited[*it])
	        dfs(a,ans,visited,*it);
	    }
	    
	}
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<bool> visited(V,false);
	    vector<int> ans;
	    dfs(adj,ans,visited,0);
	    return ans;
	    // Code here
	}
};
