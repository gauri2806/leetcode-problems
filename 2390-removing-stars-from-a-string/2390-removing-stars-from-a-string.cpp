class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        int i=0, j=0;
        while(j<n){
            if(s[j] == '*'){
                i--;
                j++;
            }
            else if(s[j] != '*'){
                s[i] = s[j];
                i++;
                j++;
            }
        }
        return s.substr(0, i);
    }
};