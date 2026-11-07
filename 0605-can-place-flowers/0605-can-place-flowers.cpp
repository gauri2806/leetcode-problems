class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        int cnt = 0;

        for (int i = 0; i < len; i++) {
            if (flowerbed[i] == 0) {
                bool leftEmpty = (i == 0 || flowerbed[i-1] == 0);
                bool rightEmpty = (i == len-1 || flowerbed[i+1] == 0);

                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;
                    cnt++;

                    if (cnt >= n) return true;
                }
            }
        }
        return cnt >= n;
    }
};