class Solution {
public:
    int compress(vector<char>& chars) {
         int n=chars.size();
         char currChar = chars[0];
         int index=0, i=0;
         while(i < n){
            int count = 0;
            char currChar = chars[i];

            while(i < n && currChar == chars[i]){
                count++;
                i++;
            }

            chars[index] = currChar;
            index++;
            if(count > 1){
                string countStr = to_string(count);
                for(char ch : countStr){
                    chars[index] = ch;
                    index++;
                }
            }
         }
         return index;
    }
};