class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0, j=0;
        double avg=0, maxAvg;
        for(int i=0; i<k; ++i)
            sum += nums[i];
        avg = (sum * 1.0)/k;
        maxAvg = avg;
        for(int i=k; i<n; ++i){
            sum = sum - nums[j] + nums[i];
            avg = (sum * 1.0)/k;
            maxAvg = max(maxAvg, avg);
            j++;
        }
        return maxAvg;
    }
};