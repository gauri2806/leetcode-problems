class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height=0, maxHeight=0;
        for(int n : gain){
            height += n;
            maxHeight = max(maxHeight, height);
        }
        return maxHeight;
    }

};