//fully acceptrd

#include<bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	sort(arr.begin(),arr.end());
	int s = n-k;
	int l = k-1;
	
	int sm = arr[n-k];
	int lr = arr[k-1];
	

	return {lr,sm};

}

//partially Accepted


#include<bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	priority_queue<int> pq;
	// priority_queue<int, vector<int>, greater<int>> pq_integers;

	for(int i = 0;i<n;i++){
		pq.push(arr[i]);
	}

	int s = n-k;
	int l = k-1;
	int cnt = 0;
	int sm;
	int lr;
	while(!pq.empty()){
		if(cnt==s) sm = pq.top();
	    if(cnt==l) lr = pq.top();

		pq.pop();
		cnt++;
	}

	return {sm,lr};

}
