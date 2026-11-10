class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        for(int n : nums){
            if(n < first)
                first = n;
            else if(n > first && n < second)
                second = n;
            else if(n > first && n > second) return true;
        }
        return false;
    }
};