class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size(), k=1;
         int i=0, j=0, currLen=0, maxLen=0, zerosFlipped=0;
         while(j < n)
         {
            if(nums[j] == 1) {
                currLen++;
                j++;
            }
            else {
                if(zerosFlipped < k) {
                    currLen++;
                    j++;
                    zerosFlipped++;
                } 
                else {
                    while(nums[i] != 0){
                        i++;
                        currLen--;
                    }
                    j++;
                    i++;
                }
            }
            maxLen = max(maxLen, currLen);
         }

         return maxLen-1;
    }
};