#include<bits/stdc++.h>
long getTrappedWater(long *arr, int n){
    // Write your code here.

    vector<long>left;
    vector<long>right;

    long  maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        maxi = max(maxi,arr[i]);
        left.push_back(maxi);
    }

    maxi  = INT_MIN;

    for(int i = n-1;i>=0;i--){
        maxi = max(maxi,arr[i]);
        right.push_back(maxi);
    }

    reverse(right.begin(),right.end());

    long sum = 0;
    for(int i = 0;i<n;i++){
        long temp = min(left[i],right[i]) - arr[i];
        sum += temp;
    }

    return sum;

}
