void helper(BinaryTreeNode<int> * root, vector<string>&ans, string pre){
    string x = to_string(root->data);
    if(root->left==NULL and root->right==NULL){
            pre +=x;
            ans.push_back(pre);
            return;
    } 

    pre +=x + " ";
    
    if(root->left) helper(root->left,ans,pre);
    if(root->right) helper(root->right,ans,pre);

    return;
}

vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    // Write your code here.
    vector<string>ans;
    string pre="";
    
    helper(root,ans,pre);
    
    return ans;
}
