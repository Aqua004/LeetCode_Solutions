class Solution {
public:
    int countDigits(int n) {
        if (n < 10)
            return 1;

        return 1 + countDigits(n / 10);
    }

    int solve(vector<int>& nums, int i) {
        if (i == nums.size())
            return 0;

        int count = countDigits(nums[i]) % 2 == 0;

        return count + solve(nums, i + 1);
    }

    int findNumbers(vector<int>& nums) {
        return solve(nums, 0);
    }
};