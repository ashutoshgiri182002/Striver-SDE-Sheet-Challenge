#include <bits/stdc++.h> 

void helper(int idx, string &s, vector<string>&ans){
    if(idx==s.size()){
        ans.push_back(s);
        return;
    }
    
    for(int i = idx;i<s.size();i++){
        swap(s[i],s[idx]);
        helper(idx+1,s,ans);
        swap(s[i],s[idx]);
    }
    
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    
    vector<string>ans;
    
    helper(0,s,ans);

    return ans;
}
