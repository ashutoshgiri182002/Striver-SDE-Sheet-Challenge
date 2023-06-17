#include <bits/stdc++.h> 

void helper(int idx,vector<int>temp, set<vector<int>>&st, vector<int>&arr,int n){
    if(idx==n){
        sort(temp.begin(),temp.end());
        st.insert(temp);
        return;
    }

    temp.push_back(arr[idx]);
    helper(idx+1,temp,st,arr,n);
    temp.pop_back();
    helper(idx+1,temp,st,arr,n);

}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>>ans;
    set<vector<int>>st;
    vector<int>temp;
    helper(0,temp, st,arr,n);
    
    for(auto x:st){
        ans.push_back(x);
    }
    


    return ans;

}
