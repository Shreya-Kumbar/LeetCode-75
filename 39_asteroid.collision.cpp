// LeetCode 735: Asteroid Collision
// https://leetcode.com/problems/asteroid-collision/description/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++) {

            while (asteroids[i] < 0 && !st.empty() && st.top() > 0) {

                if (-asteroids[i] > st.top()){
                    st.pop();
                }
                else if (-asteroids[i] == st.top()){
                    st.pop();
                    asteroids[i] = 0;
                    break;
                }
                else {
                    asteroids[i] = 0;
                    break;
                }
            }

            if (asteroids[i] != 0) {
                st.push(asteroids[i]);
            }
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }
        
        return result;
    }
};