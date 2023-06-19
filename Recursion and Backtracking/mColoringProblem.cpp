#include <bits/stdc++.h> 

bool isPossible(int node, vector<int>&color,vector<vector<int>> &mat, int c, int m,int n){

    for(int i = 0;i<n;i++){
        if(i!=node and mat[node][i]==1 and color[i]==c)return false;
    }

    return true;
}

bool solve(int node, vector<int>&color, vector<vector<int>> &mat,int n, int m){

    if(node==n) return true;

    for(int i = 1;i<=m;i++){
        if(isPossible(node,color, mat, i, m,n)){
            color[node] = i;

            if(solve(node+1,color, mat, n, m)) return true;
            else color[node] = 0;
        }
    }

    return false;
}

string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n = mat.size();
    vector<int>color(n,0);

    if(solve(0,color,mat,n,m)) return "YES";
    return "NO";
}
