vector<int>bfsOfGraph(int V, vector<int> a[])
	{
	    vector<bool> visited(V,false);
	    vector<int> x;
	    queue<int> q;
	    int i;
	    q.push(0);
	    while(!q.empty()){
	        i=q.front();
	        q.pop();
	        if(!visited[i]){
	        x.push_back(i);
	        visited[i]=true;
	        }
	        for (auto it = a[i].begin();it != a[i].end(); it++) {
	            if(!visited[*it])
                q.push(*it);
            }
	    }
	    return x;
	}
