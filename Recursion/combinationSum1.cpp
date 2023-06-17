
#include<bits/stdc++.h>

void helper(int idx,int target, vector<int>&arr, vector<int>temp,vector<vector<int>>&ans, int n, int k){

    if(idx== n and k==target){
        ans.push_back(temp);
        return;
    }
    if(idx==n) return;

    temp.push_back(arr[idx]);
    helper(idx+1,target+arr[idx],arr,temp,ans,n,k);
    temp.pop_back();
    helper(idx+1,target,arr,temp,ans,n,k);

}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>temp;
    helper(0,0,arr,temp,ans,n,k);

    return ans;
}
