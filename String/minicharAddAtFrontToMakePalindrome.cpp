
int minCharsforPalindrome(string str) {
	// Write your code here.
	int i = 0;
	int j = str.size()-1;
	int trim = j;
	int res = 0;

	int n = str.size();

	while(i<j){
		if(str[i]==str[j]){
			i++;
			j--;
		}

		else{
			res++;
			i = 0;
			j = --trim;
		}
	}

	return res;
	
}
