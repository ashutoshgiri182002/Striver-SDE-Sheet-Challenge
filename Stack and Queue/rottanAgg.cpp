#include<bits/stdc++.h>

int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    int days = 0;
    int cnt = 0;
    int total = 0;
    queue<pair<int,int>>q;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(grid[i][j]!=0) {
                total++;
            }
            if(grid[i][j]==2) q.push({i,j});
        }
    }

    while(!q.empty()){
        
        int k = q.size();
        cnt += k;
        
        while(k--){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            int dx[4] = {0, 0, 1, -1};
            int dy[4] = {1, -1, 0, 0};
            
            for(int p = 0;p<4;p++){
                int row = x + dx[p];
                int col = y + dy[p];
            
            if(row<n and row>=0 and col<m and col>=0 and grid[row][col]==1){
              q.push({row, col});
              grid[row][col] = 2;
             
            }
          }
        }

        if(!q.empty()) days++;
    }

    if(cnt==total) return days;
    return -1;
}




