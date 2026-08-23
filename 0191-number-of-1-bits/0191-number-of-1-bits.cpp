class Solution {
public:
    int hammingWeight(int n) {
        vector<int> bits;
        int i=0;
        while(n>0){
            bits.push_back(n%2);
            i++;
            n /= 2;

        }
        int set = 0;
        for(int i=0;i<bits.size();i++){
            set = count(bits.begin(),bits.end(),1);
        }
        return set;
    }
};