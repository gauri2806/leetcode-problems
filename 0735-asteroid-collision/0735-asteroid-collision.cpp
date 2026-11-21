class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> stck;
        for(int i=0; i<n; ++i){
            if(asteroids[i] > 0)
                stck.push(asteroids[i]);
            else if(asteroids[i] < 0){
                while(!stck.empty() && stck.top()>0 && stck.top()<abs(asteroids[i])){
                    stck.pop();
                }
                if(!stck.empty() && stck.top() == abs(asteroids[i]))
                    stck.pop();
                else if(stck.empty() || stck.top() < 0)
                    stck.push(asteroids[i]);
            }
        }

        int m = stck.size();
        vector<int> ans(m);
        for(int i=m-1; i>=0; --i){
            ans[i] = stck.top();
            stck.pop();
        }

        return ans;
    }
};