/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode*node = q.front();
            if(node==NULL){
                ans.push_back(temp);
                q.pop();
                if(!q.empty())
                q.push(NULL);
            }

            else{
                ans.push_back(temp);
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right)q.push(node->right);
            }
        }

        return ans;
    }
};
