class Solution {
public:
    bool checkBFS(int s,vector<vector<int>>& adj, vector<int>& color){
        queue<int> q;
        color[s]=1;
        q.push(s);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it:adj[node]){
                if(color[it]==-1){
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<vector<int>> adj = graph;
        vector<int> color(V,-1);
        // memset(color,-1,sizeof color);
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(!checkBFS(i,adj,color))
                    return false; 
            }
        }
        return true;
    }
};