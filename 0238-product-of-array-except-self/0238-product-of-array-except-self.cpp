class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n, 1), preProducts(n,1), postProducts(n,1);
        for(int i=1; i<n; ++i){
            preProducts[i] = preProducts[i-1] * nums[i-1];
        }
        for(int i=n-2; i>=0; --i){
            postProducts[i] = postProducts[i+1] * nums[i+1];
        }
        for(int i=0; i<n; ++i){
            ans[i] = preProducts[i] * postProducts[i];
        }
        return ans;
    }
};