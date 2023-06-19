class Solution{
    public:
    
    void solve(int i, int j,vector<vector<int>> &m, int n, vector<string>&ans, vector<vector<int>>&vis, string move,int di[], int dj[]){
        if(i==n-1 and j==n-1){
            ans.push_back(move);
            return;
        }
        
        string dir = "DLRU";
        for(int ind = 0;ind<4;ind++){
            int nx = i + di[ind];
            int ny = j + dj[ind];
            
            if(nx>=0 and nx<n and ny>=0 and ny<n and !vis[nx][ny] and m[nx][ny]==1){
                vis[i][j] = 1;
                solve(nx,ny,m,n,ans,vis,move+dir[ind],di,dj);
                vis[i][j] = 0;
            }
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        
        int di[] = {+1,0,0,-1};
        int dj[] = {0,-1,1,0};
        
       if(m[0][0]==1) solve(0,0,m,n,ans,vis,"",di,dj);
        
        return ans;
    }
};
