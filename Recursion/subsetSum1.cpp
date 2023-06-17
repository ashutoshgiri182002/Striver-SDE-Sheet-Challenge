#include <bits/stdc++.h> 

void helper(int idx, vector<int>&num,vector<int>&ans, int sum, int n ){
    if(idx==n){
        ans.push_back(sum);
        return;
    }

    helper(idx+1,num,ans,sum+num[idx],n);
    helper(idx+1,num,ans,sum,n);

}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int n = num.size();
    vector<int>ans;
    helper(0,num,ans,0,n);

    sort(ans.begin(),ans.end());

    return ans;
}
