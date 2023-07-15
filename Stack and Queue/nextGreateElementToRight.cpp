#include<bits/stdc++.h>

vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	// Write your code here
	
	vector<int>v;
	stack<int>st;

	for(int i = n-1;i>=0;i--){
		
		while(!st.empty() and st.top()<=arr[i]){
			st.pop();
		}

		if(st.size()==0) v.push_back(-1);
		
		else v.push_back(st.top());
		
		st.push(arr[i]);
	}

	reverse(v.begin(),v.end());

	return v;
	
}
