#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    int ans = 0;
    int res = 0;
    int n = str.size();

    for(int i = 0;i<n;i++){
        if(str[i]>='0' and str[i]<='9'){
            ans = str[i]-'0';
            res = res*10;
            res +=ans;
            
        }
        else{
            continue;
        }
    }

    if(str[0]=='-') return -1*res;

    return res;
}
