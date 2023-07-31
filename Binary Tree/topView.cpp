vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,int>mp;
        
        queue<pair<Node*,int>>q;
        
        q.push({root,0});
        
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            Node*node =p.first;
            int x = p.second;
            
            if(mp.find(x)==mp.end()){
                mp[x] = node->data;
            }
            
            if(node->left) q.push({node->left,x-1});
            if(node->right) q.push({node->right,x+1});
            
        }
        
        for(auto it:mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
