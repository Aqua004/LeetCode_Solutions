class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int rev_degree = 0;
        for(int i=0;i<n;++i){
            int reversed_pos = 26-(s[i]-'a');
            rev_degree += reversed_pos*(i+1);
        }
        return rev_degree;
    }
};