
int calculateMinPatforms(int arr[], int dep[], int n) {
    // Write your code here.
    sort(arr,arr+n);
    sort(dep,dep+n);

    int platform = 1;
    int maxi = 1;
    int i = 1;
    int j = 0;
    while(i<n and j<n){
        if(arr[i]<=dep[j]){
            platform++;
            i++;
        }
        else if(arr[i]>dep[j]){
            platform--;
            j++;
        }

        maxi = max(platform, maxi);
    }

    return maxi;

}
