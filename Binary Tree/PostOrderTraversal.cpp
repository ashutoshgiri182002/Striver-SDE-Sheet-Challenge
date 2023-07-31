class Solution {
public:
    void helper(vector<int>&v,TreeNode*root){
        if(root==NULL){
            return ;
        }
        
         
        helper(v,root->left);
        helper(v,root->right);
        v.push_back(root->val);
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
       
        vector<int>v;
        
        helper(v,root);
        
        
        return v;
    }
};


//ANother way

class Solution {
public:
   
    vector<int> postorderTraversal(TreeNode* root) {

        if(root==NULL) return {};
        vector<int>ans;
        stack<TreeNode*>st1,st2;

        st1.push(root);

        while(!st1.empty()){

            root = st1.top();
            st1.pop();
            st2.push(root);

            if(root->left != NULL){
                st1.push(root->left);
            }

            if(root->right != NULL){
                st1.push(root->right);
            }
        }

        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }

        return ans;
     
    }
};

