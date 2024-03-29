#include<bits/stdc++.h>

vector<int> BFS(int vertex, vector<pair<int, int>> edges)

{

    // Write your code here

    vector<int>adj[vertex];

    for(int i=0;i<edges.size();i++)

    {
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0;i<vertex;i++)
    {
        sort(adj[i].begin(),adj[i].end());
    }

    vector<int>vis(vertex,0);

    queue<int>q;

    vector<int>ans;

    for(int i=0;i<vertex;i++){
        if(!vis[i]) {
            q.push(i);
            vis[i]=1;
            while(!q.empty()){

                int node=q.front();
                q.pop();
                ans.push_back(node);
                for(auto it:adj[node]){

                    if(!vis[it]){
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
        }
    }
    return ans;
}
