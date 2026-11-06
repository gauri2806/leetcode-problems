class Solution {
public:
    int gcdOfLengths(int a, int b){
        if(b==0) return a;
        return gcdOfLengths(b, a%b);
    }
    string gcdOfStrings(string str1, string str2) {
        // two strings will be divisible by same string if str1+str2 == str2+str1
        if(str1+str2 == str2+str1){
            // now the length of gcd's of two strings will be the gcd of the lengths of two strings.
            int len = gcdOfLengths(str1.length(), str2.length());
            return str1.substr(0, len);
        }
        return "";
    }
};