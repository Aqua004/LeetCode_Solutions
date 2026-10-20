class Solution {
public:
    int nextNum(int n){
        int output =0;
        while(n!=0){
            int ld = n%10;
            output += ld*ld;
            n = n/10;
        }
        return output;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1 && !st.count(n)){
            st.insert(n);
            n  = nextNum(n);
        }
        return n==1;    
    }
};