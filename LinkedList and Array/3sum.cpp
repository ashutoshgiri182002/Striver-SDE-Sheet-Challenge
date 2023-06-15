#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int target) {
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	set<vector<int>>st;

	for(int i = 0;i<n;i++){
		int j = i+1;
		int k = n-1;
		long long sum = arr[i];
		while(j<k){
			if(sum + arr[j]+arr[k]>target){
				k--;
			}
			else if(sum + arr[j]+arr[k]<target){
				j++;
			}
			else{
				vector<int>temp = {arr[i],arr[j],arr[k]};
				st.insert(temp);
				j++;
				k--;
			}
		}
	}

	 for(auto x:st){
		 ans.push_back(x);
	 }

	return ans;
}
