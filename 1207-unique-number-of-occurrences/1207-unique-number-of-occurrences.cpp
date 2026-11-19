class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp1, mp2;
        for(int n: arr)
            mp1[n]++;
        
        for(auto p : mp1){
            if(mp2.find(p.second) == mp2.end())
                mp2[p.second]=1;
            else return false;
        }
        return true;
    }
};