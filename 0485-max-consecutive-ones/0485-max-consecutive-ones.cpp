class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int mx_count=0;
        int cur_count=0;

        for(int n:nums){
            if(n==1){
                cur_count++;
            }
            else{
                mx_count =  max(mx_count,cur_count);
                cur_count=0;
            }
        }
        if(mx_count>cur_count){
            return mx_count;
        }
        return cur_count;
    }
};