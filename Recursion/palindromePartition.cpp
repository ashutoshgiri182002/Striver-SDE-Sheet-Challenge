#include <bits/stdc++.h> 

bool isPalindrome(string s,int start,int end){
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
    }

    return true;
}

void helper(int idx,string s, vector<string>&temp, vector<vector<string>>&ans){

    if(idx==s.size()){
        ans.push_back(temp);
        return;
    }

    for(int i = idx;i<s.size();i++){
        if(isPalindrome(s,idx,i)){
            temp.push_back(s.substr(idx,i-idx+1));
            helper(i+1,s,temp,ans);
            temp.pop_back();
        }
    }
}



vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>>ans;
    vector<string>temp;
    helper(0,s,temp,ans);

    return ans;
    
}
