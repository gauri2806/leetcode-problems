
class Solution {
public:
    string decodeString(string s) {
        stack<pair<string, int>> st;
        string currString = "";
        int currNum = 0;

        for (char c : s) {
            if (c == '[') {
                st.push({currString, currNum});
                currString = "";
                currNum = 0;
            }
            else if (c == ']') {
                auto [prevString, num] = st.top();
                st.pop();

                string decoded = "";
                for (int i = 0; i < num; i++) {
                    decoded += currString;
                }

                currString = prevString + decoded;
            }
            else if (isdigit(c)) {
                currNum = currNum * 10 + (c - '0');
            }
            else {
                currString += c;
            }
        }

        return currString;
    }
};
