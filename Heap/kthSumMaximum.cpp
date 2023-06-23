#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.

	priority_queue<int>pq;
	vector<int>ans;

	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			int sum = a[i] + b[j];
			pq.push(sum);
		}
	}
	int cnt = k;
	while(cnt--){
		ans.push_back(pq.top());
		pq.pop();
	}

	return ans;

}
