class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_al=0;
        int current_alt = 0;
        for(int i=0;i<gain.size();++i){
            current_alt += gain[i];
            max_al=max(max_al,current_alt);
        }
        return max_al;
        
    }
};