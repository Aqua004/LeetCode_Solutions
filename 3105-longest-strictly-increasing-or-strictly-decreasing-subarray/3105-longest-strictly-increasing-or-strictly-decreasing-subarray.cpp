class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int max_len = 1;
        int incr = 1;
        int decr = 1;
        for(int i=1;i<n;++i){
            if(nums[i]>nums[i-1]){
                incr++;
                decr = 1;
            }
            else if(nums[i]<nums[i-1]){
                decr++;
                incr=1;
            }
            else{
                incr =1;
                decr =1;
            }
            max_len = max({incr,decr,max_len});
        }
        return max_len;
    }
};