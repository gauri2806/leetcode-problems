class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int vowels=0, p=0, maxVowels;
        for(int i=0; i<k; ++i)
            if(isVowel(s[i]))
                vowels++;
        maxVowels = vowels;
        for(int i=k; i<n; ++i){
            if(isVowel(s[i]))
                vowels++;
            if(isVowel(s[p++]))
                vowels--;
            maxVowels = max(vowels, maxVowels);
        }
        return maxVowels;
    }
};