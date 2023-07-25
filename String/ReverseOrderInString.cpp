#include<bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.
	
	stack<string>st;
	int n = str.size();
	string temp = "";
	
	for(int i = 0;i<n;i++){
		if(str[i]==' '){
			if(temp.size()!=0){
			   st.push(temp);
			   st.push(" ");
			   temp = "";
			}
		}
		else{
			temp.push_back(str[i]);
		}
	}

	if(temp.size()!=0) st.push(temp);

	string ans = "";
	if(st.top()==" ") st.pop();

	while(!st.empty()){
		
		string x = st.top();
		st.pop();
		
		ans +=x;
	}
	
	return ans;	
}


//Optimiesed Approach 
#include<bits/stdc++.h>

string reverseString(string &s){
	// Write your code here.

	int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    
    //Iterate the string and keep on adding to form a word
    //If empty space is encountered then add the current word to the result
    while (left <= right) {
        char ch= s[left];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ') {
            if (ans!="" and temp.size()>0) ans = temp + " " + ans;
			else if(ans!=""){
				temp = "";
				left++;
				continue;
			} 
            else ans = temp;
            temp = "";
        }
        left++;
    }
    
    //If not empty string then add to the result(Last word is added)
    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans;    
}












