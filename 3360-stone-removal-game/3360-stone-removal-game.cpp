class Solution {
public:
    bool canAliceWin(int n) {
        int reduce = 10;
        bool turn = true;
        while(n>=reduce){
            n -= reduce;
            reduce--;
            turn = !turn;
        }
        return !turn;

        
    }
};