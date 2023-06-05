 int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int maxsum = INT_MIN;
        int cursum = 0;

        for(int i = 0;i<n;i++){
            cursum +=nums[i];
            if(maxsum<cursum) maxsum = cursum;

            if(cursum < 0) cursum = 0;
        }
        
        return maxsum;
    }
