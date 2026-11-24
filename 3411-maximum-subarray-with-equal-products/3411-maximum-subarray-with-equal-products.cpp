class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int best = 2;
        int left = 0;
        int prod = 1;
        for(int i=0;i<n;++i){
            int x = nums[i];
            while(gcd(prod,x)>1){
                prod /= nums[left++];    
            }
            prod *= x;
         
            best = max(best,i-left+1);
        }
        return best;
        
    }
};