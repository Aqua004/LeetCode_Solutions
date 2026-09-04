class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n;++i){
            int maximum = nums[i];
            int minimum = nums[i];
            for(int j=0;j<i;++j){
                maximum = max(maximum,nums[j]);
            }
            for(int j = i+1;j<n;++j){
                minimum = min(minimum,nums[j]);
            }
            if(maximum-minimum <=k){
                return i;
            }
        }
        return -1;
    }
};