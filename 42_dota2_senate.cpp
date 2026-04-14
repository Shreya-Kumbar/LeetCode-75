// LeetCode 649: Dota2 Senate
// https://leetcode.com/problems/dota2-senate/description/

class Solution {
public:
    string predictPartyVictory(string senate) {
        
        queue<int> r, d;
        for (int i = 0; i < senate.size(); i++) {
        
            if (senate[i] == 'R'){
                r.push(i);
            }
            else {
                d.push(i);
            }
        }

        while (!r.empty() && !d.empty()) {

            int ri = r.front(), di = d.front();
            r.pop(); d.pop();

            if (ri < di) {
                r.push(ri + senate.size());
            }
            else {
                d.push(di + senate.size());
            }
        }
        return r.empty() ? "Dire" : "Radiant";
    }
};