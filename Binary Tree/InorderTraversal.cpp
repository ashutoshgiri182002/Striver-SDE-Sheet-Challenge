class Solution {
public:
    
    void mainFunction(TreeNode*root,vector<int>&ans){
        
        if(root==NULL)return;
        
        mainFunction(root->left,ans);
        ans.push_back(root->val);
        mainFunction(root->right,ans);
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        mainFunction(root,ans);
        
        return ans;
    }
};


// Second way

class Solution {
public:
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        stack<TreeNode*>st;

        TreeNode*node = root;

        while(true){

            if(node!=NULL){
                st.push(node);
                node = node->left;
            }

            else{
                if(st.empty()==true){
                    break;
                }
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        
        return ans;
    }
};
