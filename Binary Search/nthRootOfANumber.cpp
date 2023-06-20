#include<bits/stdc++.h>

double multiply(double number,int n){
  double ans = 1.0;
  for(int i = 1;i<=n;i++){
    ans = ans*number;
  }
  return ans;
}

int NthRoot(int n, int m) {
  // Write your code here.
  double low = 1;
  double high = m;
  double eps = 1e-6;
  
  while(high-low > eps){
    double mid = (low + high)/2.0;
    if(multiply(mid,n)<m){
      low = mid;
    }
    else{
      high = mid;
    }
  }
 
  if(ceil(high)!=floor(high)) return -1;

  return high;
  
}
