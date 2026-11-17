class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int>original = nums;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        vector<int> ans;
        for(int i=0;i<n;++i){
            if(mp.count(nums[i])==0){
                mp[nums[i]] = i;
            }
        }
        for(int i=0;i<n;++i){
            ans.push_back(mp[original[i]]);
        }
        return ans;
    }
};