class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        // possible costs-
        long long p1 = 1LL * ((1LL * cost1 * need1) + (1LL * cost2 * need2));
        long long p2 = 1LL * costBoth * max(need1, need2);
        long long p3;
        if(need1 < need2)
            p3 = (1LL * need1 * costBoth) + (1LL * (need2 - need1) * cost2);
        else p3 = (1LL * need2 * costBoth) + (1LL * (need1 - need2) * cost1);

        return min(min(p1, p2), p3);
    }
};