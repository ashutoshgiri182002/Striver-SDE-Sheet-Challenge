class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;

        for(int i = 0;i<n;i++){
            if(cnt1==0 and el2!=nums[i]){
                el1 = nums[i];
                cnt1=1;
            }
            else if(cnt2==0 and el1 !=nums[i]){
                el2 = nums[i];
                cnt2 = 1;
            }
            else if(el1 == nums[i]){
                cnt1++;
            }
            else if(el2==nums[i]){
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0;
        cnt2 = 0;

        for(int i = 0;i<n;i++){
            if(el1==nums[i]){
                cnt1++;
            }

            else if(el2==nums[i]){
                cnt2++;
            }
        }

        vector<int>ans;
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]==el1)cnt1++;
            if(nums[i]==el2)cnt2++;
        }

        if(cnt1>n/3)ans.push_back(el1);
        if(cnt2>n/3)ans.push_back(el2);

        return ans;

        
    }
};
