class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> res;
        

        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i] > 0)
                res.push(asteroids[i]);
            else if(asteroids[i]<0){
                while(!res.empty() && res.top() > 0 && res.top()<abs(asteroids[i])){
                    res.pop();
                }
                if(!res.empty() && res.top() == abs(asteroids[i])){
                    res.pop();
                    continue;
                }
                if(!res.empty() && res.top()>abs(asteroids[i])){
                    continue;
                }
                
            }
            if(res.empty() || res.top()<0)
                res.push(asteroids[i]);
            
        }
        vector<int> result;

        if(res.empty()){
            return result;
        }

        while(!res.empty()) {
            result.push_back(res.top());
            res.pop();
        }

        
        reverse(result.begin(), result.end());

        return result;
    }
};