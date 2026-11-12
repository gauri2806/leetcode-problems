class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size(), len=1, maxIlen=1, maxDlen=1;
        for(int i=1; i<n; ++i){
            if(nums[i-1] < nums[i])
                len++;
            else len=1;
            maxIlen = max(len, maxIlen);
        }
        len=1;
        for(int i=1; i<n; ++i){
            if(nums[i-1] > nums[i])
                len++;
            else len=1;
            maxDlen = max(len, maxDlen);
        }

        return max(maxIlen, maxDlen);
    }
};