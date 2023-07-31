class Solution {
public:
    
    void helper(vector<int>&v,TreeNode*root){
        if(root==NULL){
            return ;
        }
        
         v.push_back(root->val);
        helper(v,root->left);
        helper(v,root->right);
        
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
       
        vector<int>v;
        
        helper(v,root);
        
        
        return v;
    }
    
};

//second way
class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {

        if(root==NULL) return {};
        vector<int>ans;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode*temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
        }
         
        return ans;
    }
    
};
