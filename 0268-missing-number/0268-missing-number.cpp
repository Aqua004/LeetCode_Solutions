class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // BRUTEFORCE approach will be - hashing and linear search
        // below is Optimal Approach
        //TC = O(2n) and SC = O(1)
        // this is not more optimal coz it use n*(n+1)/2 which can overflow and requires long data type
        //int n = nums.size();
        // int Act_sum = 0;
        // int Exp_sum = 0;
        // for(int i=0;i<n;++i){
        //     Act_sum +=nums[i];
        //     Exp_sum = (n*(n+1))/2;
        // }
        // return Exp_sum - Act_sum;
        
        // more optimal approach using XOR
        // coz it never exceeds the largest number
        // TC = O(n) SC = O(1)
        int n=nums.size();
        int xor1 = 0;
        int xor2 = 0;
        
        for(int i=0;i<n;++i){
            xor1 = xor1^nums[i];
            xor2 = xor2^i;
        }
        xor2 = xor2^n;
        return xor2^xor1;

    }
};