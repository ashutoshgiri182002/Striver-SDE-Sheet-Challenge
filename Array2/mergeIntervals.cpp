//Optimise Approach

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    int n = arr.size();


    for(int i = 0;i<n;i++){
        if(ans.empty() or ans.back()[1]<arr[i][0]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1] = max(ans.back()[1] , arr[i][1]);
        }
    }

    return ans;
    

}


//Brute force approach
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;

	for(int i = 0;i<n;i++){

		int start = arr[i][0];
		int end = arr[i][1];

		if(!ans.empty() and end<=ans.back()[1]){
			continue;
		}

		for(int j = i+1;j<n;j++){
			if(arr[j][0] <= end){
				end = max(end,arr[j][1]);
			}
			else{
				break;
			}
		}

		ans.push_back({start , end});
	}
	return ans;
}
