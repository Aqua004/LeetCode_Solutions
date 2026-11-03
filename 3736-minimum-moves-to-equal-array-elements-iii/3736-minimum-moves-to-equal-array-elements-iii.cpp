class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;++i){
            while(nums[i]<nums[n-1]){
                nums[i]+=1;
                count++;
            }
        }
        return count;
        
    }
};