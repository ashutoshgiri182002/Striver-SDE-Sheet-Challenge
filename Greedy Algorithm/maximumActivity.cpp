
#include<bits/stdc++.h>

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.

    vector<pair<int,int>>v;
    int n = start.size();

    for(int i = 0;i<n;i++){
        v.push_back({finish[i],start[i]});
    }

    sort(v.begin(),v.end());

    int cnt = 1;
    int j = 0;
    for(int i = 1;i<n;i++){
        if(v[i].second >= v[j].first){
            cnt++;
            j=i;
        }

    }

    return cnt;
}
