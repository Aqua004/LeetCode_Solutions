class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n  = asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        long long current_mass = mass;
        for(int asteroid:asteroids){
            if(current_mass<asteroid){
                return false;
            }
            current_mass += asteroid;

        }
        return true;

        
    }
};