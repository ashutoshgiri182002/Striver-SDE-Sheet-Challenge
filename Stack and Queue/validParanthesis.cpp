bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char>st;
    
    for(int i = 0;i<s.size();i++){
        
        if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
            st.push(s[i]);
        }
        
        else{
          if (!st.empty()) {
            char x = s[i];
            if (x == ')' and st.top() == '(' or
                x == ']' and st.top() == '[' or x == '}' and st.top() == '{') {
              st.pop();
            } else {
              return false;
            }
          }

          else {
            return false;
          }
        }
    }
    
    if(!st.empty()) return false;
    
    return true;
}
