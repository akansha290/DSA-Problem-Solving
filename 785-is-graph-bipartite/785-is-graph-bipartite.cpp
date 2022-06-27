class Solution {
public:
    bool checkDFS(int node,vector<vector<int>> adj,vector<int> &color){
        if(color[node]==-1) color[node]=-1;
        for(auto it:adj[node]){
            if(color[it]==-1){
                color[it] = 1-color[node];
                if(!checkDFS(it,adj,color)){
                    return false;   
                }
            }
            else if(color[it]==color[node])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V,-1);
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(!checkDFS(i,graph,color))
                    return false;
            }
        }
        return true;
    }
};