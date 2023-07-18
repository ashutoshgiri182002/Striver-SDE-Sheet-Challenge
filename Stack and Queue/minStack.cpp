#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		stack<pair<int,int>>st;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		

		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			int mini;
			if(st.empty()) mini = num;
			else{
				mini = min(num,st.top().second);
			}
			st.push({num,mini});
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty()) return -1;
			pair<int,int>x = st.top();
			st.pop();
			return x.first;
			
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty()) return -1;
			return st.top().first;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(st.empty()) return -1;
			return st.top().second;
		}
};
