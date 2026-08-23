class Solution {
public:
    void reverseString(vector<char>& s){
        int a = 0;
        int j = s.size()-1;
        while(a<j){
           swap(s[a],s[j]);
           a++;
           j--;

        } 
        return;

    }

};