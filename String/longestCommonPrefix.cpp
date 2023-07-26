#include<bits/stdc++.h>

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string ans = "";

    int minLen = INT_MAX;

    for(int i = 0;i<n;i++){
        if(minLen>arr[i].size()){
            minLen = arr[i].size();
        }
    }

    for(int i = 0;i<minLen;i++){
        char ch = arr[0][i];
        for(int j = 1;j<n;j++){
            if(ch!=arr[j][i]){
                return ans;
            }
        }
        ans.push_back(ch);
    }

    return ans;
}


