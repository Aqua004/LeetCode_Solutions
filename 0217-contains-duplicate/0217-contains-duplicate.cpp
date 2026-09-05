class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> x;
        for(int i=0;i<n;++i){
            x[nums[i]]++;   
        }
        for(auto a:x){
            if(a.second>1){
                return true;
            }
        }
        return false;
        
    }
};