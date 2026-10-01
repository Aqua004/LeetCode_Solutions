class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int n = words1.size();
        int m = words2.size();
        int count =0;
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        for(auto x :words1){
            mp1[x]++;
        }
        for(auto x :words2){
            mp2[x]++;
        }
        for(auto x : words1){
            if(mp1[x]==1 && mp2[x]==1){
                count++;
            }
        }
        return count;
    }
};