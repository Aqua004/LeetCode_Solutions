class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Act_sum = 0;
        int Exp_sum = 0;
        for(int i=0;i<n;++i){
            Act_sum +=nums[i];
            Exp_sum = (n*(n+1))/2;
        }
        return Exp_sum - Act_sum;
    }
};