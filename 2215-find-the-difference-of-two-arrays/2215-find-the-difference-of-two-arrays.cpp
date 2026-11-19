class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1, mp2;
        vector<vector<int>> ans(2);
        for(int n: nums1){
            mp1[n]++;
        }
        for(int n: nums2){
            mp2[n]++;
        }
        for(auto p: mp1){
            if(mp2.find(p.first) == mp1.end())
                ans[0].push_back(p.first);
        }
        for(auto p: mp2){
            if(mp1.find(p.first) == mp2.end())
                ans[1].push_back(p.first);
        }
        return ans;
    }
};