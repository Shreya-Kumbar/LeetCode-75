// LeetCode 394: Decode String
// https://leetcode.com/problems/decode-string/description/

class Solution {
public:
    string decodeString(string s) {
        
        stack<int> nums;
        stack<string> st;

        int num = 0;
        string curr = "";

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i]))
                num = num * 10 + (s[i] - '0');

            else if (s[i] == '[') {
                nums.push(num);
                st.push(curr);
                num = 0; curr = "";
            }
            else if (s[i] == ']') {
                int repeat = nums.top();
                nums.pop();
                string temp = st.top();
                st.pop();

                while (repeat--) {
                    temp += curr;
                }

                cout << curr << endl;
                curr = temp;
            }
            else {
                curr += s[i];
            }
        }
        return curr;
    }
};