vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  if(n==1) return {{1}};

  vector<vector<long long>>ans(n);
  ans[0].push_back(1);

  for(int i = 1;i<n;i++){
    for(int j = 0;j<i+1;j++){
      if(j==0 or j==i){
        ans[i].push_back(1);
      }
      
      else{
        ans[i].push_back(ans[i-1][j-1] + ans[i-1][j]);
      }
    }
  }

  return ans;

}
