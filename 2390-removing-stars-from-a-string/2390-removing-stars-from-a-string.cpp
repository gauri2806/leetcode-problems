class Solution {
public:
    string removeStars(string s) {
        stack<char> charToStore;
        int size = s.length();
        string res;

        for(int i = 0; i < size; i++) {
            if(s[i] == '*') {
                if(!charToStore.empty()) {
                    charToStore.pop();
                }
                continue;
            }
            charToStore.push(s[i]);
        }

        while(!charToStore.empty()) {
            res.insert(res.begin(), charToStore.top());
            charToStore.pop();
        }

        return res;
    }
};