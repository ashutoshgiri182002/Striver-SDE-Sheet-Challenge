int romanToInt(string s) {
    // Write your code here
    unordered_map<char,int>mp{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };

    int n = s.size();
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(mp[s[i]]<mp[s[i+1]]){
            ans -=mp[s[i]];
        }

        else ans +=mp[s[i]];
    }

    return ans;
}
