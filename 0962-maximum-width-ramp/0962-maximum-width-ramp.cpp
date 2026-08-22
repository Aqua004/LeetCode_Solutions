// class Solution {
// public:
//     int maxWidthRamp(vector<int>& nums) {
//         int n = nums.size();
//         int maxw = 0;
//         for(int i=0;i<n;++i){
//             for(int j=i+1;j<n;++j){
//                 if(nums[i]<=nums[j]){
//                     maxw = max(maxw,j-i);
//                 }
//             }
//         }
//         return maxw;
//     }
// };
class Solution{
    public:
    int maxWidthRamp(vector<int>&nums){
        int n = nums.size();
        vector<int> temp(n);
        temp[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            temp[i] = max(temp[i+1],nums[i]);
        }
        int left = 0,right = 0;
        int maxw = 0;
        while(right<n){
            while(left<right && nums[left]>temp[right]){
                left++;
            }
            maxw = max(maxw,right - left);
            right++;
        }
        return maxw;


    }
};