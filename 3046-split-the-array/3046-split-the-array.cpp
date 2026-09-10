class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int ,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto a:mp){
            if(a.second>2){
                return false;
            }
        }
        return true;

    }
};