void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        
        int st,end;
        
        for(st = n-2; st >=0;st--){
            if(nums[st] <nums[st+1]){
                break;
            }
        }
        
        if(st < 0){
            reverse(nums.begin(),nums.end());
        }
        
        else{
            
            for(end = n-1;end >st;end--){
                if(nums[end] > nums[st]){
                    break;
                }
            }
             swap(nums[st],nums[end]);
             reverse(nums.begin() + st + 1 , nums.end());
        }
       
    }
