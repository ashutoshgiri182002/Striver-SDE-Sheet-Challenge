#include<bits/stdc++.h>

void dfs(int node, vector<int>adj[],int vis[], vector<int>&v){

    vis[node] = 1;
    v.push_back(node);

    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,v);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int>adj[V];

    for(auto it:edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }

    int vis[V] = {0};

    vector<vector<int>>ans;

    for(int i = 0;i<V;i++){
        if(!vis[i]){
            vector<int>v;
            dfs(i,adj,vis,v);
            ans.push_back(v);
        }
    }

    return ans;

}
