class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int a:nums){
            if(mp[a]>=1){
                return true;
            }
            mp[a]++;
        }
        return false;
        
    }
};