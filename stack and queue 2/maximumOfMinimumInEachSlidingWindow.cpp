// Brute Force Approach 
#include <bits/stdc++.h> 

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         
         int i = 0;
         int j = 0;
         
         vector<int>ans;
         deque<int> dq;
         
         if(nums.size() < k) return {};
         if(nums.size()==1)return {nums[0]};
          
         while(j<nums.size()){
             while(!dq.empty() and dq.back()>nums[j]){
                 dq.pop_back();
             }
             dq.push_back(nums[j]);
             if(j-i+1<k)j++;
             
             else if(j-i+1==k){
                 ans.push_back(dq.front());
                 if(!dq.empty() and dq.front()==nums[i]) dq.pop_front();
                 i++;
                 j++;
             }
         }
         return ans;
     }

vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.

    vector<int>res;

    for(int i = 1;i<=n;i++){

        vector<int>temp = maxSlidingWindow(a,i);
        res.push_back(*max_element(temp.begin(),temp.end()));
    }

    return res;

}

// Optmimised Approach
#include <bits/stdc++.h> 
vector<int> maxMinWindow(vector<int> a, int n) {
    // Write your code here.
    vector<int> nse(n), pse(n), res(n, INT_MIN);
    for(int i=0; i<n; i++)
    {
        pse[i] = i;
        nse[i] = n-i-1;
    }

    stack<int> stk;
    for(int i=0; i<n; i++)
    {
        while(!stk.empty() && a[stk.top()]>a[i])
        {
            nse[stk.top()] = i-stk.top()-1;
            stk.pop();
        }
        stk.push(i);
    }

    while(!stk.empty()) stk.pop();

    for(int i=n-1; i>=0; i--)
    {
        while(!stk.empty() && a[stk.top()]>a[i])
        {
            pse[stk.top()] = stk.top()-i-1;
            stk.pop();
        }
        stk.push(i);
    }

    for(int i=0; i<n; i++)
    {
        int d = nse[i]+pse[i];
        res[d] = max(res[d], a[i]);
    }

    for(int i=n-2; i>=0; i--)
    if (res[i]<res[i+1]) res[i] = res[i+1];

    return res;
}



