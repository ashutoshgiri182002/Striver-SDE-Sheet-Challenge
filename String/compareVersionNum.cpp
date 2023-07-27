class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int n = version1.size();
        int m = version2.size();

        int i = 0;
        int j = 0;

        while(i<n or j<m){
           while(i<n and version1[i]=='0')i++;
           while(j<m and version2[j]=='0')j++;

           long long num1 = 0 , num2 = 0;

           while(i<n and version1[i]!='.'){
               num1 = num1*10 + (version1[i]-'0');
               i++;
           }

           while(j<m and version2[j]!='.'){
               num2 = num2*10 + (version2[j]-'0');
               j++;
           }

           if(num1>num2) return 1;
           else if(num2>num1) return -1;
            
            i++;
            j++;
        }

        return 0;
    }
};
