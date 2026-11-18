class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> preSum(n), postSum(n);
        preSum[0]=nums[0], postSum[n-1]=nums[n-1];
        for(int i=1; i<n; i++){
            preSum[i] = preSum[i-1] + nums[i];
        }
        for(int i=n-2; i>=0; i--){
            postSum[i] = postSum[i+1] + nums[i];
        }
        for(int i=0; i<n; ++i){
            if(preSum[i]==postSum[i])
                return i;
        }
        return -1;
    }
};