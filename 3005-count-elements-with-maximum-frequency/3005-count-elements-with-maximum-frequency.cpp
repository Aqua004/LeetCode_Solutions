
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        int Max_freq = 0;

        for (auto x : mp) {
            if (x.second > Max_freq) {
                Max_freq = x.second;
            }
        }

        int result = 0;

        for (auto x : mp) {
            if (x.second == Max_freq) {
                result += x.second;
            }
        }

        return result;
    }
};