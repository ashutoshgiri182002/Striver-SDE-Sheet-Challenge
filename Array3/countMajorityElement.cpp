//Moore's Voting Algorithm

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt = 1;
	int element = arr[0];

	for(int i = 1;i<n;i++){
		if(element == arr[i]) cnt++;
		
		else cnt--;
		
		if(cnt==0){
			element = arr[i];
			cnt++;
		}
	}

	cnt = 0;
	for(int i = 0;i<n;i++){
		if(element == arr[i])cnt++;
	}

	if(cnt>n/2) return element;
	return -1;
}
