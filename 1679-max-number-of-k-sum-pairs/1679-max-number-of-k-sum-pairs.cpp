class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int opr=0;
        unordered_map<int, int> mp;
        for(int i : nums){
            if(mp[k-i] > 0){
                opr++;
                mp[k-i]--;
            }
            else{
                mp[i]++;
            }
        }
        return opr;
    }
};