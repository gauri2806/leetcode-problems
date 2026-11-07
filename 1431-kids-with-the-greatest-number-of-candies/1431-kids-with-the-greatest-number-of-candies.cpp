class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=INT_MIN;
        int n = candies.size();
        vector<bool> ans(n);
        for(int a : candies)
            if(a>max) max=a;
        for(int i=0; i<n; ++i){
            if(candies[i]+extraCandies >= max)
                ans[i]=true;
            else ans[i]=false;
        }
        return ans;
    }
};