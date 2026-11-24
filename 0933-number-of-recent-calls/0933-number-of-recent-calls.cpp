class RecentCounter {
    vector<int> ls;
    int i, j;
public:
    RecentCounter() {
        vector<int> ls;
        i=0;
        j=-1;
    }
    
    int ping(int t) {
        ls.push_back(t);
        j++;
        while(i<j && (ls[j]-3000) > ls[i])
            i++;
        return j-i+1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */