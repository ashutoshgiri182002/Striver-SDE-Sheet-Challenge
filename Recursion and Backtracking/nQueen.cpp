
#include<bits/stdc++.h>

bool isSafe(int row, int col, vector<vector<int>>&board, vector<vector<int>>&ans, int n){

    int x = row;
    int y = col;

    while(row>=0 and col>=0){
        if(board[row][col]==1) return false;
        row--;
        col--;
    }

    row = x;
    col = y;

    while(col>=0){
        if(board[row][col]==1) return false;
        col--;
    }

    row = x;
    col = y;

    while(row<n and col>=0){
        if(board[row][col]==1){
            return false;
        }
        col--;
        row++;
    }

    return true;
}

void addSolution(vector<vector<int>>&board,vector<vector<int>>&ans,int n){
    vector<int>temp;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}


void solve(int col,vector<vector<int>>&board,vector<vector<int>>&ans,int n){

    if(col==n){
       addSolution(board,ans,n);
       return;
    }

    for(int row = 0;row<n;row++){
        if(isSafe(row,col,board,ans,n)){
            board[row][col] = 1;
            solve(col+1,board,ans,n);
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans;
    vector<vector<int>>board(n,vector<int>(n,0));

    solve(0,board,ans,n);

    return ans;

}
