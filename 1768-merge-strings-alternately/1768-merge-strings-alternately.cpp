class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string finalWord="";
        int m=word1.length();
        int n=word2.length();
        int i=0;
        int j=0;
        while(i<m && j<n){
            finalWord += word1[i];
            finalWord += word2[j];
            i++; j++;
        }
        while(i < m){
            finalWord += word1[i];
            i++;
        }
        while(j < n){
            finalWord += word2[j];
            j++;
        }
        return finalWord;
    }
};