class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int i = haystack[0];
        int j = needle[0];
        for(int i=0;i<=n-m;++i){
            int j =0;
            while(j<m && haystack[i+j]== needle[j]){
                j++;

            }
            if(j==m){
                return i;
            }
        }
        return -1;

    }
    
};