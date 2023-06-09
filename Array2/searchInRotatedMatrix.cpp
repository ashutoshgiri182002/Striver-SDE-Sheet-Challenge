class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int i = 0;
        int j = matrix[0].size()-1;
        int n = matrix.size();
        int m = matrix[0].size();

        while(i>=0 and i<n and j>=0 and j<m){
            if(matrix[i][j]==target) return true;

            else if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        
        return false;
    }
};
