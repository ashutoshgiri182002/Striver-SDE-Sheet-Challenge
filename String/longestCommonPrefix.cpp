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


////Another approach 


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        if(n==0) return "";
        
        string res  = "";
        sort(begin(strs), end(strs));
        string a = strs[0];
        string b = strs[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                res = res + a[i];
            }
            
            else{
                break;
            }
            
        }
        
        return res;
    }
};

